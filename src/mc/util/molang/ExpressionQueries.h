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
    ::ll::UntypedStorage<8, 8>  mUnk109a8d;
    ::ll::UntypedStorage<8, 8>  mUnk753fcc;
    ::ll::UntypedStorage<8, 16> mUnka0133a;
    ::ll::UntypedStorage<8, 16> mUnk50efe3;
    ::ll::UntypedStorage<8, 8>  mUnkb4cc38;
    ::ll::UntypedStorage<8, 8>  mUnkeded20;
    ::ll::UntypedStorage<8, 8>  mUnk1d5aef;
    ::ll::UntypedStorage<8, 8>  mUnk4d7069;
    ::ll::UntypedStorage<8, 8>  mUnkd58b35;
    ::ll::UntypedStorage<8, 8>  mUnk404a9c;
    ::ll::UntypedStorage<8, 8>  mUnk2cac58;
    ::ll::UntypedStorage<8, 8>  mUnkaa55da;
    ::ll::UntypedStorage<8, 8>  mUnkc9233e;
    ::ll::UntypedStorage<8, 8>  mUnkda2734;
    ::ll::UntypedStorage<8, 8>  mUnk4f57f3;
    ::ll::UntypedStorage<8, 8>  mUnk673c27;
    ::ll::UntypedStorage<8, 8>  mUnke63051;
    ::ll::UntypedStorage<8, 8>  mUnk5eabe1;
    ::ll::UntypedStorage<8, 8>  mUnkeae3f4;
    ::ll::UntypedStorage<8, 8>  mUnk7b14d7;
    ::ll::UntypedStorage<8, 8>  mUnkc84b4f;
    ::ll::UntypedStorage<8, 8>  mUnk56a3e7;
    ::ll::UntypedStorage<8, 8>  mUnk2cf68a;
    ::ll::UntypedStorage<8, 8>  mUnka107c1;
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
