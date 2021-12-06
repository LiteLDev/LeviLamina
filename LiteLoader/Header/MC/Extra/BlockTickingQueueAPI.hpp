//Extra Part For BlockTickingQueue.hpp
#ifdef EXTRA_INCLUDE_PART_BLOCKTICKINGQUEUE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class TickDataSet {
public:
    TickDataSet() = delete;
    TickDataSet(TickDataSet const&) = delete;
    TickDataSet(TickDataSet const&&) = delete;
};

#endif
