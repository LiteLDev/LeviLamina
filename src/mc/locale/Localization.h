#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
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
    Localization();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Localization(::std::string const& code);

#ifdef LL_PLAT_C
    MCAPI ::OptionalString _get(::std::string const& id, ::std::vector<::std::string> const& params) const;
#endif

    MCAPI void appendTranslations(
        ::std::string const&                fileContent,
        ::std::vector<::std::string> const& blockedKeys,
        ::std::vector<::std::string> const& allowedKeys,
        ::std::string const&                keyPrefix
    );

    MCAPI bool get(::std::string const& id, ::std::string& out, ::std::vector<::std::string> const& params) const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const getDigitGroupSeparator() const;
#endif

    MCFOLD ::std::string getFullLanguageCode() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getIETFLanguageCode() const;
#endif

    MCAPI ~Localization();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string _getDigitGroupSeparator(::std::string const& langCode);

    MCAPI static bool _isCommaSeperatedLanguage(::std::string const& langCode);
#endif

    MCAPI static ::Core::PathBuffer<::std::string> getLangFilePath(::std::string const& langCode);

#ifdef LL_PLAT_C
    MCAPI static ::std::string getLanguageCode(::std::string const& fullCode);

    MCAPI static ::std::string getRegionCode(::std::string const& fullCode);

    MCAPI static void replaceTokens(::std::string& string, ::std::vector<::std::string> const& params);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& code);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
