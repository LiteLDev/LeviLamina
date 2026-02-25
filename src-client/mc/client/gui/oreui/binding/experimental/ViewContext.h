#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/interface/IBindable.h"
#include "mc/client/gui/oreui/binding/experimental/interface/debug/IBindingsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Debug { struct QueryInformation; }
namespace OreUI::Experimental::Detail { class CommandRegistry; }
namespace OreUI::Experimental::Detail { class ICommandGroup; }
namespace OreUI::Experimental::Detail { class QueryRegistry; }
// clang-format on

namespace OreUI::Experimental::Detail {

class ViewContext : public ::OreUI::Experimental::Detail::IBindable,
                    public ::OreUI::Experimental::Debug::IBindingsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::QueryRegistry>>   mQueries;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::CommandRegistry>> mCommands;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const timestampMs) /*override*/;

    virtual ::std::vector<::OreUI::Experimental::Debug::QueryInformation> getQueryInformation() const /*override*/;

    virtual ::std::vector<::OreUI::Experimental::Detail::ICommandGroup*> getCommands() const /*override*/;

    virtual ~ViewContext() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCAPI void $update(double const timestampMs);

    MCAPI ::std::vector<::OreUI::Experimental::Debug::QueryInformation> $getQueryInformation() const;

    MCAPI ::std::vector<::OreUI::Experimental::Detail::ICommandGroup*> $getCommands() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIBindingsDataProvider();

    MCNAPI static void** $vftableForIBindable();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
