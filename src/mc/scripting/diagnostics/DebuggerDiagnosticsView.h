#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DebuggerDiagnosticsView {
public:
    // DebuggerDiagnosticsView inner types define
    enum class DataSource : uint {
        Server       = 0,
        Client       = 1,
        ServerScript = 2,
    };

    enum class DisplayType : uint {
        LineChart              = 0,
        StackedLineChart       = 1,
        StackedBarChart        = 2,
        Table                  = 3,
        MultiColumnTable       = 4,
        DynamicPropertiesTable = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkf3ef35;
    ::ll::UntypedStorage<8, 32> mUnk9b3592;
    ::ll::UntypedStorage<8, 32> mUnkeac736;
    ::ll::UntypedStorage<4, 4>  mUnk7e0f5c;
    ::ll::UntypedStorage<4, 4>  mUnk83ee49;
    ::ll::UntypedStorage<8, 40> mUnk3e8c92;
    ::ll::UntypedStorage<8, 40> mUnke9a61a;
    ::ll::UntypedStorage<4, 8>  mUnke64193;
    ::ll::UntypedStorage<8, 16> mUnk91a459;
    ::ll::UntypedStorage<8, 16> mUnk97d303;
    ::ll::UntypedStorage<8, 40> mUnk55ac29;
    ::ll::UntypedStorage<8, 32> mUnk966694;
    ::ll::UntypedStorage<8, 40> mUnk520d94;
    ::ll::UntypedStorage<8, 32> mUnkc05318;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerDiagnosticsView& operator=(DebuggerDiagnosticsView const&);
    DebuggerDiagnosticsView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerDiagnosticsView(::DebuggerDiagnosticsView&&);

    MCNAPI DebuggerDiagnosticsView(::DebuggerDiagnosticsView const&);

    MCNAPI DebuggerDiagnosticsView(
        ::std::string                          name,
        ::std::string                          statGroupId,
        ::DebuggerDiagnosticsView::DataSource  dataSource,
        ::DebuggerDiagnosticsView::DisplayType displayType
    );

    MCNAPI ::DebuggerDiagnosticsView& operator=(::DebuggerDiagnosticsView&&);

    MCNAPI ~DebuggerDiagnosticsView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DebuggerDiagnosticsView&&);

    MCNAPI void* $ctor(::DebuggerDiagnosticsView const&);

    MCNAPI void* $ctor(
        ::std::string                          name,
        ::std::string                          statGroupId,
        ::DebuggerDiagnosticsView::DataSource  dataSource,
        ::DebuggerDiagnosticsView::DisplayType displayType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
