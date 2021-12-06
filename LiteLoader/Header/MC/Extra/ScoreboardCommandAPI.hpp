//Extra Part For ScoreboardCommand.hpp
#ifdef EXTRA_INCLUDE_PART_SCOREBOARDCOMMAND
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};
struct SetScoreOutput {
    SetScoreOutput() = delete;
    SetScoreOutput(SetScoreOutput const&) = delete;
    SetScoreOutput(SetScoreOutput const&&) = delete;
};

#endif
