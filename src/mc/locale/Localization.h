#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class ResourcePackManager;
struct OptionalString;
// clang-format on

class Localization {
public:
    // Localization inner types define
    using Map = ::std::map<::std::string, ::std::string>;

    using StoreLocMap = ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                mCommaSeperator;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mDigitGroupSeparator;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mCode;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>> mStrings;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>> mCaseSensitiveCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::shared_mutex>>    mCaseSensitiveCacheMutex;
    ::ll::TypedStorage<1, 1, bool>                                      mMayContainIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Localization(::Localization&&);

    MCAPI explicit Localization(::std::string const& code);

    MCAPI Localization(::Localization const& rhs);

    MCAPI Localization(::std::string const& code, ::Localization const* fallbackLocale);

    MCAPI ::OptionalString _get(::std::string const& id, ::std::vector<::std::string> const& params) const;

    MCAPI ::OptionalString _getSimple(::std::string const& id) const;

    MCAPI ::OptionalString _parseFormattedString(::std::string const& id) const;

    MCAPI void _replaceTokens(::std::string& string, ::std::vector<::std::string> const& params) const;

    MCAPI void
    _replaceUTCDateTimeIdentifier(::std::string& strToParse, ::std::optional<::std::locale> const& locale) const;

    MCAPI void addKeys(::Localization&& from);

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

    MCAPI ~Localization();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _getDigitGroupSeparator(::std::string const& langCode);

    MCAPI static bool _isCommaSeperatedLanguage(::std::string const& langCode);

    MCAPI_C static ::Core::PathBuffer<::std::string> getLangFilePath(::std::string const& langCode);

    MCAPI_C static ::std::string getLanguageCode(::std::string const& fullCode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Localization&&);

    MCAPI void* $ctor(::std::string const& code);

    MCAPI void* $ctor(::Localization const& rhs);

    MCAPI void* $ctor(::std::string const& code, ::Localization const* fallbackLocale);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
