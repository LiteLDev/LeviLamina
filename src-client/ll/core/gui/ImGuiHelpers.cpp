#include "ll/core/gui/ImGuiHelpers.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/StringUtils.h"
#include "mc/deps/application/AppPlatform.h"

namespace ll::gui {

char const* getClipboardTextFromPlatform(void* /*userData*/) {
    AppPlatform* platform = ll::service::getAppPlatform();
    std::wstring wstr     = platform->getClipboardText();

    static thread_local std::string clipBoardStr;
    clipBoardStr.clear();

    if (!wstr.empty()) {
        clipBoardStr = ll::string_utils::wstr2str(wstr);
    }
    return clipBoardStr.c_str();
}

void setClipboardTextFromPlatform(void* /*user_data*/, char const* text) {
    AppPlatform* platform = ll::service::getAppPlatform();

    std::string str(text ? text : "");

    platform->setClipboard(str);
}

} // namespace ll::gui