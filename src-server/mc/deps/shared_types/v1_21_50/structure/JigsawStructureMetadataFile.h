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
    MCNAPI ~JigsawStructureMetadataFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
