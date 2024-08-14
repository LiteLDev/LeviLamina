#include "ll/core/gui/styles/Custom.h"

#include "imgui.h"

namespace ll::gui {

void LeviImGuiStyle::getFromImgui() { *this = (LeviImGuiStyle&)ImGui::GetStyle(); }

void LeviImGuiStyle::applyToImgui() { ((LeviImGuiStyle&)ImGui::GetStyle()) = *this; }

} // namespace ll::gui
