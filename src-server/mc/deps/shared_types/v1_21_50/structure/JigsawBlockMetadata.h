#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

class JigsawBlockMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka3ae84;
    ::ll::UntypedStorage<8, 32> mUnke58eee;
    ::ll::UntypedStorage<8, 32> mUnk38b683;
    ::ll::UntypedStorage<8, 32> mUnkf43b56;
    ::ll::UntypedStorage<8, 32> mUnk9ae597;
    ::ll::UntypedStorage<1, 1> mUnkaacd71;
    ::ll::UntypedStorage<4, 12> mUnk208d7d;
    ::ll::UntypedStorage<4, 4> mUnkddac54;
    ::ll::UntypedStorage<4, 4> mUnk42c11d;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockMetadata(JigsawBlockMetadata const&);
    JigsawBlockMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_50::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_50::JigsawBlockMetadata const&);

    MCNAPI ::SharedTypes::v1_21_50::JigsawBlockMetadata& operator=(::SharedTypes::v1_21_50::JigsawBlockMetadata&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::JigsawBlockMetadata const&) const;

    MCNAPI ~JigsawBlockMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
