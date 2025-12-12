#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct QueryDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk962c28;
    ::ll::UntypedStorage<8, 32> mUnk8c31c4;
    ::ll::UntypedStorage<8, 24> mUnk68f887;
    ::ll::UntypedStorage<8, 24> mUnk822ed4;
    ::ll::UntypedStorage<8, 24> mUnk7249fb;
    ::ll::UntypedStorage<8, 24> mUnkbbcac3;
    ::ll::UntypedStorage<8, 24> mUnkace61f;
    ::ll::UntypedStorage<8, 24> mUnk478832;
    ::ll::UntypedStorage<8, 24> mUnk5f50a6;
    ::ll::UntypedStorage<8, 24> mUnkcd891c;
    ::ll::UntypedStorage<8, 24> mUnk354649;
    ::ll::UntypedStorage<8, 24> mUnka51a0b;
    ::ll::UntypedStorage<4, 4>  mUnk7705e1;
    ::ll::UntypedStorage<4, 4>  mUnk7c9d85;
    ::ll::UntypedStorage<8, 32> mUnkfa16fc;
    ::ll::UntypedStorage<8, 32> mUnk85eabe;
    ::ll::UntypedStorage<8, 32> mUnkae73cf;
    ::ll::UntypedStorage<8, 24> mUnk7ad01d;
    ::ll::UntypedStorage<4, 4>  mUnkf964a8;
    // NOLINTEND

public:
    // prevent constructor by default
    QueryDocument& operator=(QueryDocument const&);
    QueryDocument(QueryDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C QueryDocument();

    MCNAPI_C
    QueryDocument(::Json::Value const& queryObject, ::CustomDocumentModifier*, ::std::string const& defaultContentType);

    MCNAPI_C void
    fromJson(::Json::Value const& queryObject, ::CustomDocumentModifier*, ::std::string const& defaultContentType);

    MCNAPI_C ~QueryDocument();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void*
    $ctor(::Json::Value const& queryObject, ::CustomDocumentModifier*, ::std::string const& defaultContentType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
