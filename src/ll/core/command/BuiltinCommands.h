#pragma once

namespace ll::command {

void registerCommands();

void registerVersionCommand();
void registerTpdimCommand();
void registerMemstatsCommand();
void registerCrashCommand();
void registerPluginManageCommand();

} // namespace ll::command
