#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct LookedAtDefinition {
public:
    // LookedAtDefinition inner types declare
    // clang-format off
    struct LookAtLocation;
    // clang-format on

    // LookedAtDefinition inner types define
    struct LookAtLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk62964c;
        ::ll::UntypedStorage<4, 4> mUnkd67202;
        // NOLINTEND

    public:
        // prevent constructor by default
        LookAtLocation& operator=(LookAtLocation const&);
        LookAtLocation(LookAtLocation const&);
        LookAtLocation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setLocation(::std::string const& str);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkf6bfe5;
    ::ll::UntypedStorage<8, 104> mUnk6b21d3;
    ::ll::UntypedStorage<8, 64>  mUnkd33b3f;
    ::ll::UntypedStorage<8, 40>  mUnk3dbf82;
    ::ll::UntypedStorage<4, 8>   mUnke98893;
    ::ll::UntypedStorage<1, 1>   mUnk2506d4;
    ::ll::UntypedStorage<4, 4>   mUnkf8292c;
    ::ll::UntypedStorage<4, 4>   mUnkde9d21;
    ::ll::UntypedStorage<4, 4>   mUnkfc9623;
    ::ll::UntypedStorage<1, 1>   mUnkb54097;
    ::ll::UntypedStorage<1, 1>   mUnkaa520a;
    ::ll::UntypedStorage<1, 1>   mUnkef3718;
    // NOLINTEND

public:
    // prevent constructor by default
    LookedAtDefinition& operator=(LookedAtDefinition const&);
    LookedAtDefinition(LookedAtDefinition const&);
    LookedAtDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setFieldOfView(float const& fieldOfViewInDegrees);

    MCNAPI void setLineOfSightObstructionType(::std::string const& str);

    MCNAPI void setSetTargetMode(::std::string const& str);

    MCNAPI ~LookedAtDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LookedAtDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
