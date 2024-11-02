#ifndef SpliceMapPLUGIN_H
#define SpliceMapPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class SpliceMapPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SpliceMap";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
