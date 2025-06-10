#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/MemoryTracker.h"

namespace ll::memory {
    class NoOperationMemoryTracker : public ::Memory::MemoryTracker {
        [[nodiscard]] bool isTracking() const override {
            return false;
        }

        [[nodiscard]] ::Memory::MemoryCategory getCurrentCategory() const override {
            return ::Memory::MemoryCategory::Unknown;
        }

        void setCurrentCategory(::Memory::MemoryCategory) override {}

        [[nodiscard]] uint64 getCategoryAllocationCount(uint) const override {
            return 0;
        }

        [[nodiscard]] uint64 getCategoryAllocatedMemory(uint) const override {
            return 0;
        }

        [[nodiscard]] uint64 getCategoryTotalAllocationCount(uint) const override {
            return 0;
        }

        [[nodiscard]] char const *getCategoryName(uint) const override {
            return "";
        }

        void publish() override {}

        void populateCounters(::std::vector<::Memory::MemoryCategoryCounter> &, uint64) const override {}
    };

    ::Memory::MemoryTracker &getMemoryTracker() {
        static NoOperationMemoryTracker tracker;
        return tracker;
    }

    auto replaceMemoryAllocator = []() -> bool {
        *(Bedrock::Memory::IMemoryAllocator **)
                "Bedrock::Memory::sDefaultAllocator"_sym.resolve() = &ll::memory::getDefaultAllocator();
        Memory::MemoryTracker::mInstance() = &getMemoryTracker();
        return true;
    }();
} // namespace ll::memory
