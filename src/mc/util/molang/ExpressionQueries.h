#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct ExpressionQueries {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf8c903;
    ::ll::UntypedStorage<8, 8>  mUnkda9352;
    ::ll::UntypedStorage<8, 16> mUnkb3d1fd;
    ::ll::UntypedStorage<8, 16> mUnk50e8c1;
    ::ll::UntypedStorage<8, 8>  mUnk6be702;
    ::ll::UntypedStorage<8, 8>  mUnk415f75;
    ::ll::UntypedStorage<8, 8>  mUnk58dfac;
    ::ll::UntypedStorage<8, 8>  mUnk596552;
    ::ll::UntypedStorage<8, 8>  mUnk10cd8d;
    ::ll::UntypedStorage<8, 8>  mUnk512f59;
    ::ll::UntypedStorage<8, 8>  mUnkbe63e7;
    ::ll::UntypedStorage<8, 8>  mUnkca6cb5;
    ::ll::UntypedStorage<8, 8>  mUnk98b6fd;
    ::ll::UntypedStorage<8, 8>  mUnkdac7fd;
    ::ll::UntypedStorage<8, 8>  mUnk85fe7e;
    ::ll::UntypedStorage<8, 8>  mUnk361476;
    ::ll::UntypedStorage<8, 8>  mUnkf71bdb;
    ::ll::UntypedStorage<8, 8>  mUnkdfa9fd;
    ::ll::UntypedStorage<8, 8>  mUnkeb735c;
    ::ll::UntypedStorage<8, 8>  mUnk55f8c7;
    ::ll::UntypedStorage<8, 8>  mUnk4aa485;
    ::ll::UntypedStorage<8, 8>  mUnkf1cf6d;
    ::ll::UntypedStorage<8, 8>  mUnk7e6ead;
    ::ll::UntypedStorage<8, 8>  mUnka0986e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionQueries& operator=(ExpressionQueries const&);
    ExpressionQueries(ExpressionQueries const&);
    ExpressionQueries();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_S static ::ExpressionQueries createDedicatedServer();

    MCNAPI_C static ::MolangScriptArg const* getTargetYRotationBase(::RenderParams& renderParams);
    // NOLINTEND
};
