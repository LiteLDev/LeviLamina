#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct ProjectileDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf81dfa;
    ::ll::UntypedStorage<4, 4> mUnk4d21a6;
    ::ll::UntypedStorage<1, 1> mUnk94a443;
    ::ll::UntypedStorage<1, 1> mUnk10b02b;
    ::ll::UntypedStorage<1, 1> mUnk134b73;
    ::ll::UntypedStorage<4, 4> mUnk65eae1;
    ::ll::UntypedStorage<4, 4> mUnkd8459e;
    ::ll::UntypedStorage<4, 4> mUnkd429b4;
    ::ll::UntypedStorage<4, 4> mUnkdded5e;
    ::ll::UntypedStorage<4, 4> mUnkb738f2;
    ::ll::UntypedStorage<4, 4> mUnkfa96b8;
    ::ll::UntypedStorage<4, 4> mUnkf38e13;
    ::ll::UntypedStorage<4, 4> mUnk1d4cec;
    ::ll::UntypedStorage<4, 4> mUnkedee1d;
    ::ll::UntypedStorage<1, 1> mUnkc59641;
    ::ll::UntypedStorage<1, 1> mUnk46d6db;
    ::ll::UntypedStorage<4, 4> mUnk39900e;
    ::ll::UntypedStorage<4, 4> mUnke6da30;
    ::ll::UntypedStorage<1, 1> mUnk5b53c9;
    ::ll::UntypedStorage<8, 32> mUnkabf91b;
    ::ll::UntypedStorage<8, 32> mUnk1ac4ad;
    ::ll::UntypedStorage<8, 32> mUnka1f0db;
    ::ll::UntypedStorage<4, 4> mUnk95580d;
    ::ll::UntypedStorage<8, 24> mUnkfbe3b0;
    ::ll::UntypedStorage<8, 104> mUnk89aca8;
    ::ll::UntypedStorage<1, 1> mUnk4ffeb9;
    ::ll::UntypedStorage<1, 1> mUnk3833c1;
    ::ll::UntypedStorage<1, 1> mUnk9395de;
    ::ll::UntypedStorage<1, 1> mUnkb45c03;
    ::ll::UntypedStorage<1, 1> mUnk167026;
    ::ll::UntypedStorage<1, 1> mUnk59a085;
    ::ll::UntypedStorage<1, 1> mUnkfacbfb;
    ::ll::UntypedStorage<1, 1> mUnkd09c12;
    ::ll::UntypedStorage<1, 1> mUnk7a8273;
    ::ll::UntypedStorage<1, 1> mUnk7c3984;
    ::ll::UntypedStorage<1, 1> mUnk919980;
    ::ll::UntypedStorage<8, 24> mUnk151c2b;
    ::ll::UntypedStorage<1, 1> mUnke74701;
    ::ll::UntypedStorage<4, 4> mUnke0891f;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileDescription& operator=(ProjectileDescription const&);
    ProjectileDescription(ProjectileDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~ProjectileDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectileDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
