#pragma once

namespace ImGuiHelpers {
char const* getClipboardTextFromPlatform(void* userData);

void setClipboardTextFromPlatform(void* user_data, char const* text);

} // namespace ImGuiHelpers