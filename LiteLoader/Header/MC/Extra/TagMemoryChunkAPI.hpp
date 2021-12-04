//Extra Part For TagMemoryChunk.hpp
#ifdef EXTRA_INCLUDE_PART_TAGMEMORYCHUNK
// Include Headers or Declare Types Here

#else
// Add Member There
    size_t capacity = 0;
    size_t size = 0;
    std::unique_ptr<uint8_t[]> data;

    TagMemoryChunk(size_t size, uint8_t data[])
        : capacity(size)
        , size(size)
        , data(data) {
    }

    TagMemoryChunk(const TagMemoryChunk& a1)
        : capacity(a1.capacity)
        , size(a1.size)
        , data(a1.data.get()) {
    }

    void operator=(const TagMemoryChunk& a1) {
        throw("TODO");
    }
#endif
