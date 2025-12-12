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
    virtual ~IRepositoryLoader() = default;

    virtual ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
    buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&) = 0;

    virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&) = 0;

    virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RepositoryLoading
