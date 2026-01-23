#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Description.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct TemplatePoolElement; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description> mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::TemplatePoolElement>>
                                                            mElements;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<15>> mFallback;
    // NOLINTEND

public:
    // prevent constructor by default
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents const&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_FALLBACK();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
