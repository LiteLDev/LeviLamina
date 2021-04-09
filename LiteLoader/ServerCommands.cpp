#include "pch.h"
void updateCheck();
bool versionCommand(CommandOrigin const& ori, CommandOutput& outp) {
    if (ori.getPermissionsLevel() > 1) updateCheck();
    outp.success("The server is running Bedrock Dedicated Server with BDSLiteLoader " + (string)LiteLoaderVersion);
}
