#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RepositoryPacks;
namespace RepositoryLoading { struct AllRefreshTaskData; }
namespace RepositoryLoading { struct BuildTaskDataOptions; }
// clang-format on

namespace RepositoryLoading {

class IRepositoryLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRepositoryLoader() = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData> buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&) = 0;

    // vIndex: 2
    virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&) = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
