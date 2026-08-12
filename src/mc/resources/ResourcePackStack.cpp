#include "mc/resources/ResourcePackStack.h"
#include "mc/resources/PackInstance.h"

void ResourcePackStack::add(
    PackInstance                                                        packInstance,
    Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
    bool                                                                isDependent
) {
    _populateDependencies(mStack, packInstance, repo, isDependent);
}
