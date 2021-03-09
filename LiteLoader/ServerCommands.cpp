#include "pch.h"

bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
	outp.success("The server is running Bedrock Dedicated Server with BDSLiteLoader " + (string)LiteLoaderVersion);
}