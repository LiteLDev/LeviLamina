#include "pch.h"
#include <lbpch.h>
#include <api/commands.h>
#include <liteloader.h>

bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
	outp.success("The server is running Bedrock Dedicated Server with BDSLiteLoader " + (string)LiteLoaderVersion);
}