#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace cg {

class RenderMaterialBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc68a56;
    ::ll::UntypedStorage<8, 32> mUnk201cdc;
    ::ll::UntypedStorage<8, 32> mUnk24b5e2;
    ::ll::UntypedStorage<8, 32> mUnk53b973;
    ::ll::UntypedStorage<8, 32> mUnkd1bdc9;
    ::ll::UntypedStorage<8, 16> mUnk794254;
    ::ll::UntypedStorage<2, 2>  mUnk8028a2;
    ::ll::UntypedStorage<8, 32> mUnk521b21;
    ::ll::UntypedStorage<8, 32> mUnke04660;
    ::ll::UntypedStorage<8, 32> mUnk6e466a;
    ::ll::UntypedStorage<8, 32> mUnk268667;
    ::ll::UntypedStorage<8, 32> mUnk48f603;
    ::ll::UntypedStorage<8, 24> mUnk1f6462;
    ::ll::UntypedStorage<1, 1>  mUnk716a43;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMaterialBase& operator=(RenderMaterialBase const&);
    RenderMaterialBase(RenderMaterialBase const&);
    RenderMaterialBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderMaterialBase() = default;

    // vIndex: 1
    virtual void parseRuntimeStates(::Json::Value const&) = 0;

    // vIndex: 2
    virtual void appendShaderPathForGfxAPI() = 0;

    // vIndex: 3
    virtual ::std::string buildHeader(::std::set<::std::string> const&);

    // vIndex: 4
    virtual void parseShader(::Json::Value const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cg
