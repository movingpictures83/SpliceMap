#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "SpliceMapPlugin.h"

void SpliceMapPlugin::input(std::string file) {
	inputfile = file;
}

void SpliceMapPlugin::run() {}

void SpliceMapPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "runSpliceMap "+inputfile;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<SpliceMapPlugin> SpliceMapPluginProxy = PluginProxy<SpliceMapPlugin>("SpliceMap", PluginManager::getInstance());
