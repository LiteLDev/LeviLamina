#pragma once

#include "imgui.h"

namespace ImGui {
void TextAnsiUnformatted(const char* text, const char* text_end);
void TextAnsiV(const char* fmt, va_list args);
void TextAnsi(const char* fmt, ...);
void TextAnsiColoredV(const ImVec4& col, const char* fmt, va_list args);
void TextAnsiColored(const ImVec4& col, const char* fmt, ...);
} // namespace ImGui
