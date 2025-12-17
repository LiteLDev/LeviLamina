#include "ll/core/gui/ImGuiHelpers.h"
#include "ll/api/service/Bedrock.h"
#include "mc/deps/application/AppPlatform.h"

namespace ImGuiHelpers {
std::string clipBoardStr;

char const* getClipboardTextFromPlatform(void* userData) {
    AppPlatform* platform = ll::service::getAppPlatform();
    std::wstring wstr     = platform->getClipboardText();

    static std::string clipBoardStr;
    clipBoardStr.clear();

    if (!wstr.empty()) {
        std::mbstate_t state{};
        const wchar_t* src = wstr.c_str();
        size_t         len = std::wcsrtombs(nullptr, &src, 0, &state);
        if (len != static_cast<size_t>(-1)) {
            clipBoardStr.resize(len);
            src = wstr.c_str();
            std::wcsrtombs(clipBoardStr.data(), &src, len, &state);
        }
    }
    return clipBoardStr.c_str();
}

void setClipboardTextFromPlatform(void* user_data, char const* text) {
    AppPlatform* platform = ll::service::getAppPlatform();

    std::string str(text ? text : "");

    platform->setClipboard(str);
}

} // namespace ImGuiHelpers