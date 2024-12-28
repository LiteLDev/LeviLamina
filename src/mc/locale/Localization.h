#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class ResourcePackManager;
struct OptionalString;
// clang-format on

class Localization {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3a4afe;
    ::ll::UntypedStorage<8, 32> mUnk9f615d;
    ::ll::UntypedStorage<8, 32> mUnk92496e;
    ::ll::UntypedStorage<8, 16> mUnke15a78;
    ::ll::UntypedStorage<8, 16> mUnk2634de;
    ::ll::UntypedStorage<8, 8>  mUnkc08da8;
    ::ll::UntypedStorage<1, 1>  mUnk2e91af;
    // NOLINTEND

public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization(Localization const&);
    Localization();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Localization(::std::string const& code, ::Localization* fallbackLocale);

    MCAPI ::OptionalString _get(::std::string const& id, ::std::vector<::std::string> const& params) const;

    MCAPI ::OptionalString _getSimple(::std::string const& id) const;

    MCAPI ::OptionalString _parseFormattedString(::std::string const& id) const;

    MCAPI void _replaceTokens(::std::string& string, ::std::vector<::std::string> const& params) const;

    MCAPI void appendTranslations(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& locStrings
    );

    MCAPI void appendTranslations(::Localization const& other);

    MCAPI void appendTranslations(
        ::std::string const&                fileContent,
        ::std::vector<::std::string> const& blockedKeys,
        ::std::vector<::std::string> const& allowedKeys,
        ::std::string const&                keyPrefix
    );

    MCAPI bool get(::std::string const& id, ::std::string& out, ::std::vector<::std::string> const& params) const;

    MCAPI ::std::string getFullLanguageCode() const;

    MCAPI void loadFromPack(
        ::std::string const&                keyPrefix,
        ::PackAccessStrategy const&         accessStrategy,
        ::std::vector<::std::string> const& allowedKeys
    );

    MCAPI void loadFromResourcePackManager(
        ::ResourcePackManager&              resourcePackManager,
        ::std::vector<::std::string> const& blockedKeys
    );

    MCAPI void replaceIdentifiers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _getDigitGroupSeparator(::std::string const& langCode);

    MCAPI static bool _isCommaSeperatedLanguage(::std::string const& langCode);

    MCAPI static ::std::string getLanguageCode(::std::string const& fullCode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& code, ::Localization* fallbackLocale);
    // NOLINTEND
};
