#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class JsonValueHierarchyNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd1325c;
    ::ll::UntypedStorage<8, 24> mUnkc7915f;
    ::ll::UntypedStorage<8, 32> mUnkbebb5d;
    ::ll::UntypedStorage<8, 32> mUnk360bf6;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonValueHierarchyNode& operator=(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::JsonValueHierarchyNode&&);

    MCNAPI_C void* $ctor(::JsonValueHierarchyNode const&);

    MCNAPI_C void* $ctor(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFileName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
