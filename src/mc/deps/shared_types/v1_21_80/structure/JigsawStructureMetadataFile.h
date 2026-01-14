#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_80/structure/JigsawStructureMetadataRegistry.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct JigsawStructureMetadataFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                            mFormatVersion;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_21_80::JigsawStructureMetadataRegistry> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadataFile& operator=(JigsawStructureMetadataFile const&);
    JigsawStructureMetadataFile(JigsawStructureMetadataFile const&);
    JigsawStructureMetadataFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureMetadataFile(::SharedTypes::v1_21_80::JigsawStructureMetadataFile&&);

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
    MCAPI void* $ctor(::SharedTypes::v1_21_80::JigsawStructureMetadataFile&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
