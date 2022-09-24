#include "llapi/mc/I18n.hpp"
#include "llapi/mc/Localization.hpp"

Localization const* I18n::getLanguage(std::string const& languageCode) {
    auto loc = _findLocaleFor(languageCode);
    if (loc) {
        return loc;
    }
    auto backupLanguage = mCurrentLanguage;
    chooseLanguage(languageCode);
    loc = const_cast<Localization*>(mCurrentLanguage);
    chooseLanguage(*backupLanguage);
    return loc;
}