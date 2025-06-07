#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

class JigsawBlockMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk36c73c;
    ::ll::UntypedStorage<8, 32> mUnkf875ab;
    ::ll::UntypedStorage<8, 32> mUnk1f60a5;
    ::ll::UntypedStorage<8, 32> mUnk68a5a0;
    ::ll::UntypedStorage<8, 32> mUnk537bb0;
    ::ll::UntypedStorage<1, 1>  mUnkaf233e;
    ::ll::UntypedStorage<4, 12> mUnkbc00f2;
    ::ll::UntypedStorage<4, 4>  mUnkc92538;
    ::ll::UntypedStorage<4, 4>  mUnk739bad;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadata(JigsawBlockMetadata const&);
    JigsawBlockMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawBlockMetadata(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);

    MCNAPI ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);

    MCNAPI ::SharedTypes::v1_21_80::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_80::JigsawBlockMetadata const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_80::JigsawBlockMetadata const&) const;

    MCNAPI ~JigsawBlockMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_80::JigsawBlockMetadata&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
