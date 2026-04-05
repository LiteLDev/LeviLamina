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
    ::ll::UntypedStorage<8, 32> mUnk8deeb9;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    JsonValueHierarchyNode& operator=(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode(JsonValueHierarchyNode const&);
    JsonValueHierarchyNode();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    JsonValueHierarchyNode& operator=(JsonValueHierarchyNode const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI JsonValueHierarchyNode();

    MCNAPI JsonValueHierarchyNode(::JsonValueHierarchyNode&&);

    MCNAPI JsonValueHierarchyNode(::JsonValueHierarchyNode const&);

    MCNAPI JsonValueHierarchyNode(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFileName
    );

    MCNAPI ~JsonValueHierarchyNode();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::JsonValueHierarchyNode&&);

    MCNAPI void* $ctor(::JsonValueHierarchyNode const&);

    MCNAPI void* $ctor(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFileName
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
