#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct JigsawStructureMetadataFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd8f2b4;
    ::ll::UntypedStorage<8, 64> mUnka36ee6;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadataFile& operator=(JigsawStructureMetadataFile const&);
    JigsawStructureMetadataFile(JigsawStructureMetadataFile const&);
    JigsawStructureMetadataFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureMetadataFile(::SharedTypes::v1_21_50::JigsawStructureMetadataFile&&);

    MCAPI ~JigsawStructureMetadataFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::JigsawStructureMetadataFile&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
