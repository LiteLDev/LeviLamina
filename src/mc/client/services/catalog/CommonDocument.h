#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
namespace Json { class Value; }
// clang-format on

struct CommonDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkdf4635;
    ::ll::UntypedStorage<8, 32>  mUnk4546db;
    ::ll::UntypedStorage<8, 32>  mUnk662651;
    ::ll::UntypedStorage<8, 32>  mUnk9e41db;
    ::ll::UntypedStorage<8, 32>  mUnkd2d508;
    ::ll::UntypedStorage<8, 32>  mUnk3cc691;
    ::ll::UntypedStorage<8, 32>  mUnk6d4f0e;
    ::ll::UntypedStorage<8, 32>  mUnkd4a675;
    ::ll::UntypedStorage<8, 64>  mUnk390515;
    ::ll::UntypedStorage<8, 64>  mUnkd06404;
    ::ll::UntypedStorage<8, 64>  mUnk2bb0fa;
    ::ll::UntypedStorage<8, 64>  mUnkc9bd1b;
    ::ll::UntypedStorage<8, 40>  mUnkc5640e;
    ::ll::UntypedStorage<1, 1>   mUnk4045d0;
    ::ll::UntypedStorage<1, 1>   mUnk190d83;
    ::ll::UntypedStorage<8, 24>  mUnk451aaf;
    ::ll::UntypedStorage<8, 24>  mUnk586376;
    ::ll::UntypedStorage<8, 24>  mUnkf5424c;
    ::ll::UntypedStorage<8, 192> mUnk459519;
    ::ll::UntypedStorage<8, 192> mUnkb366cd;
    ::ll::UntypedStorage<8, 192> mUnkba8566;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CommonDocument();

    MCNAPI_C CommonDocument(::CommonDocument&&);

    MCNAPI_C CommonDocument(::CommonDocument const&);

    MCNAPI_C void _fromJsonShared(::std::string const& langCode, ::Json::Value const& documentObject, bool pascalCase);

    MCNAPI_C bool containsTag(::std::string const& stringToCheck) const;

    MCNAPI_C void
    fromJson(::std::string const& langCode, ::Json::Value const& documentObject, ::CatalogBackend const& backend);

    MCNAPI_C void fromPersonaJson(
        ::std::string const&    langCode,
        ::Json::Value const&    documentObject,
        ::CatalogBackend const& backend
    );

    MCNAPI_C ::CommonDocument& operator=(::CommonDocument&&);

    MCNAPI_C ::CommonDocument& operator=(::CommonDocument const&);

    MCNAPI_C ~CommonDocument();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::CommonDocument&&);

    MCNAPI_C void* $ctor(::CommonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
