#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/client/gui/oreui/binding/interface/debug/IBindingsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class ICommandGroup; }
namespace OreUI::Detail { class QueryRegistry; }
// clang-format on

namespace OreUI::Detail {

class ViewContext : public ::OreUI::Detail::IBindable, public ::OreUI::Debug::IBindingsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::QueryRegistry>>   mQueries;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::CommandRegistry>> mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const time) /*override*/;

    virtual ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const /*override*/;

    virtual ::std::vector<::OreUI::Detail::ICommandGroup*> getCommands() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewContext(
        ::std::unique_ptr<::OreUI::Detail::QueryRegistry>   queries,
        ::std::unique_ptr<::OreUI::Detail::CommandRegistry> commands
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OreUI::Detail::QueryRegistry>   queries,
        ::std::unique_ptr<::OreUI::Detail::CommandRegistry> commands
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCAPI void $update(double const time);

    MCAPI ::std::vector<::OreUI::Debug::QueryInformation> $getQueryInformation() const;

    MCAPI ::std::vector<::OreUI::Detail::ICommandGroup*> $getCommands() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIBindable();

    MCNAPI static void** $vftableForIBindingsDataProvider();
    // NOLINTEND
};

} // namespace OreUI::Detail
