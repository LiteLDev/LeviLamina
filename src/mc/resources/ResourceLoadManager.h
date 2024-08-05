#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/resources/ResourceLoadType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ResourceLoadManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoadManager inner types declare
    // clang-format off
    class ResourceLoadTaskGroup;
    // clang-format on

    // ResourceLoadManager inner types define
    class ResourceLoadTaskGroup {
    public:
        // prevent constructor by default
        ResourceLoadTaskGroup& operator=(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup(ResourceLoadTaskGroup const&);
        ResourceLoadTaskGroup();

    public:
        // NOLINTBEGIN
        MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
            std::function<class TaskResult()> threadedCallback,
            std::function<void()>             mainThreadCallback,
            uint                              taskPriority
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ResourceLoadManager& operator=(ResourceLoadManager const&);
    ResourceLoadManager(ResourceLoadManager const&);
    ResourceLoadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourceLoadManager() = default;

    MCAPI void cancel(::ResourceLoadType resourceLoadType);

    MCAPI std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(
        ::ResourceLoadType                resourceLoadType,
        std::function<class TaskResult()> threadedCallback,
        std::function<void()>             mainThreadCallback,
        uint                              taskPriority
    );

    MCAPI static void queueChild(
        std::function<class TaskResult()> threadedCallback,
        std::function<void()>             mainThreadCallback,
        uint                              taskPriority
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _prepareTaskGroupToRunAgain(gsl::not_null<class ResourceLoadManager::ResourceLoadTaskGroup*> resourceLoadTaskGroup);

    MCAPI static std::function<void()> _wrapMainThreadCallback(
        class ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        std::function<void()>&&                           mainThreadCallback
    );

    MCAPI static std::function<class TaskResult()> _wrapTaskCallback(
        class ResourceLoadManager::ResourceLoadTaskGroup& resourceLoadTaskGroup,
        std::function<class TaskResult()>&&               threadedCallback
    );

    // NOLINTEND
};
