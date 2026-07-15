#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/UvGenerationType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { class StepResult; }
// clang-format on

namespace ClientBlockPipeline {

class MaterialOverrideStep : public ::ClientBlockPipeline::Step {
public:
    // MaterialOverrideStep inner types define
    using MaterialPtr = ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ClientBlockPipeline::Material const>> mMaterialOverride;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::UvGenerationType>                            mUvGenerationType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ClientBlockPipeline
