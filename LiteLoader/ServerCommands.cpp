#include "pch.h"
int  updateCheck();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
	updateCheck();
	outp.success("The server is running Bedrock Dedicated Server with BDSLiteLoader " + (string)LiteLoaderVersion);
}