#pragma once

namespace ll::gui {

char const* getClipboardTextFromPlatform(void* userData);

void setClipboardTextFromPlatform(void* user_data, char const* text);

} // namespace ll::gui
