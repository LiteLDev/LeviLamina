#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationCommitObject {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONCOMMITOBJECT
public:
    ContainerValidationCommitObject& operator=(ContainerValidationCommitObject const&) = delete;
    ContainerValidationCommitObject(ContainerValidationCommitObject const&)            = delete;
    ContainerValidationCommitObject()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?append\@ContainerValidationCommitObject\@\@SAXV?$shared_ptr\@VContainerValidationCommitObject\@\@\@std\@\@AEAV?$vector\@V?$shared_ptr\@VContainerValidationCommitObject\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VContainerValidationCommitObject\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static void
    append(class std::shared_ptr<class ContainerValidationCommitObject>, std::vector<class std::shared_ptr<class ContainerValidationCommitObject>>&);
};
