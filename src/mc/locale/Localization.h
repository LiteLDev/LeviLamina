#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

class Localization {
public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization(Localization const&);
    Localization();

public:
    // NOLINTBEGIN
    MCAPI explicit Localization(std::string const& code);

    MCAPI Localization(std::string const& code, class Localization* fallbackLocale);

    MCAPI void appendTranslations(class Localization const& other);

    MCAPI void appendTranslations(std::unordered_map<std::string, std::string> const& locStrings);

    MCAPI void
    appendTranslations(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const& locStrings);

    MCAPI void appendTranslations(
        std::string const&              fileContent,
        std::vector<std::string> const& blockedKeys,
        std::vector<std::string> const& allowedKeys,
        std::string const&              keyPrefix
    );

    MCAPI bool get(std::string const& id, std::string& out, std::vector<std::string> const& params) const;

    MCAPI std::string getFullLanguageCode() const;

    MCAPI void loadFromPack(
        std::string const&              keyPrefix,
        class PackAccessStrategy const& accessStrategy,
        std::vector<std::string> const& allowedKeys
    );

    MCAPI void loadFromResourcePackManager(
        class ResourcePackManager&      resourcePackManager,
        std::vector<std::string> const& blockedKeys
    );

    MCAPI static class Core::PathBuffer<std::string> getLangFilePath(std::string const& langCode);

    MCAPI static std::string getLanguageCode(std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI struct OptionalString _get(std::string const& id, std::vector<std::string> const& params) const;

    MCAPI struct OptionalString _getSimple(std::string const& id) const;

    MCAPI struct OptionalString _parseFormattedString(std::string const& id) const;

    MCAPI void _replaceTokens(std::string& string, std::vector<std::string> const& params) const;

    MCAPI static std::string _getDigitGroupSeparator(std::string const&);

    MCAPI static bool _isCommaSeperatedLanguage(std::string const& langCode);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
