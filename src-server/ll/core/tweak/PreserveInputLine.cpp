#include "ll/core/tweak/PreserveInputLine.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/io/ConsoleOutputEvent.h"
#include "ll/api/utils/StringUtils.h"
#include <Windows.h>
#include <algorithm>
#include <string>
#include <string_view>

namespace ll {

using namespace event;

struct PreserveInputLine::Impl {
    ListenerPtr mOutputtingEvent;
    ListenerPtr mOutputtedEvent;
    COORD       mResumeAt{};  // End of the pending input line, where typing continues.
    bool        mProtected{}; // The output being printed owns `mResumeAt`.

    Impl() {
        auto& eventBus = EventBus::getInstance();

        mOutputtingEvent = eventBus.emplaceListener<ConsoleOutputtingEvent>([this](auto& event) {
            mProtected = false;
            preserve(event.message());
        });

        mOutputtedEvent = eventBus.emplaceListener<ConsoleOutputtedEvent>([this](auto&) {
            if (!mProtected) return;
            mProtected = false;
            // The console keeps its own record of the input line, so only the cursor has to move.
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), mResumeAt);
        });
    }

    ~Impl() {
        auto& eventBus = EventBus::getInstance();
        eventBus.removeListener(mOutputtingEvent);
        eventBus.removeListener(mOutputtedEvent);
    }

private:
    // How far the last character of a wrapped input row may sit from the right edge. The console
    // does not always fill the row it wraps on: the final column can be left blank, and the input
    // itself may end in spaces there.
    static constexpr size_t RowEdgeSlack = 4;

    // A wide character takes two cells.
    static constexpr size_t cellWidth(wchar_t c) { return c < 0x1100 ? 1 : 2; }

    // Rows `message` takes when drawn from column zero, over-estimated so that a wrong guess can
    // only waste a row and never let the output reach the input line.
    static size_t measureRows(std::wstring_view message, size_t width) {
        size_t row{0};
        size_t column{0};
        auto   endedWithNewline{false};
        auto   hasCells{false};
        for (size_t i = 0; i < message.size(); ++i) {
            auto   c = message[i];
            size_t cells{};
            if (c == L'\x1b') {
                if (auto length = string_utils::escapeSequenceLength(message, i)) { // Consume a sequence.
                    i                = i + length - 1;
                    endedWithNewline = false;
                    continue;
                }
                cells = 1; // A lone or incomplete escape still takes a cell.
            } else if (c == L'\0') {
                continue; // The console skips a NUL instead of drawing it.
            } else if (c == L'\n' || c == L'\v' || c == L'\f') {
                // A vertical tab and a form feed start a new row, like a line feed.
                ++row;
                column           = 0;
                endedWithNewline = true;
                continue;
            } else if (c == L'\r') {
                column           = 0;
                endedWithNewline = false;
                continue;
            } else if (c == L'\t') {
                cells = 8 - column % 8; // Tabs expand to the next eight-column stop.
            } else if (c < 0x20 || c == 0x7f) {
                cells = 1;
            } else {
                cells = cellWidth(c);
            }
            hasCells = true;

            if (column + cells > width) {
                ++row;
                column = 0;
            }
            column           += cells;
            endedWithNewline  = false;
        }
        // A trailing newline only moves the cursor onto the next row.
        return hasCells || endedWithNewline ? row + (endedWithNewline ? 0 : 1) : 0;
    }

    static bool readRow(HANDLE console, SHORT row, SHORT count, std::wstring& buffer) {
        buffer.assign(static_cast<size_t>(count), L'\0');
        DWORD read{};
        if (!ReadConsoleOutputCharacterW(console, buffer.data(), static_cast<DWORD>(count), COORD{0, row}, &read)) {
            buffer.clear();
            return false;
        }
        buffer.resize(read);
        return true;
    }

    // Wrapped input fills the rows above the cursor edge to edge, so the walk continues while the
    // row above still reaches the right edge.
    static SHORT inputTopRow(HANDLE console, CONSOLE_SCREEN_BUFFER_INFO const& csbi) {
        auto         top = csbi.dwCursorPosition.Y;
        std::wstring row;
        while (top > csbi.srWindow.Top && readRow(console, static_cast<SHORT>(top - 1), csbi.dwSize.X, row)) {
            auto last = row.find_last_not_of(L' ');
            if (last == std::wstring::npos || last + RowEdgeSlack < static_cast<size_t>(csbi.dwSize.X)) break;
            --top;
        }
        return top;
    }

    // The console leaves the typed text on screen, so an untouched line is blank.
    static bool hasInput(HANDLE console, CONSOLE_SCREEN_BUFFER_INFO const& csbi, SHORT top) {
        for (auto row = top; row <= csbi.dwCursorPosition.Y; ++row) {
            std::wstring cells;
            if (!readRow(console, row, csbi.dwSize.X, cells)) return false;
            if (row == csbi.dwCursorPosition.Y) cells.resize(static_cast<size_t>(csbi.dwCursorPosition.X));
            if (cells.find_first_not_of(L' ') != std::wstring::npos) return true;
        }
        return false;
    }

    // Moves the visible area down `rows` rows with the console's own line feeds: the line stays
    // where it is on screen and the rows leaving the top go to the scrollback instead of being
    // dropped. Returns how far the content itself moved inside the buffer.
    static bool scrollViewDown(HANDLE console, CONSOLE_SCREEN_BUFFER_INFO const& csbi, size_t rows, size_t& moved) {
        auto bottom = csbi.srWindow.Bottom;
        if (!SetConsoleCursorPosition(console, COORD{csbi.dwCursorPosition.X, bottom})) return false;

        std::wstring lineFeeds(rows, L'\n');
        DWORD        written{};
        if (!WriteConsoleW(console, lineFeeds.data(), static_cast<DWORD>(lineFeeds.size()), &written, nullptr)
            || written != lineFeeds.size()) {
            return false;
        }

        CONSOLE_SCREEN_BUFFER_INFO scrolled{};
        if (!GetConsoleScreenBufferInfo(console, &scrolled)) return false;
        auto viewMoved = static_cast<size_t>(std::max<SHORT>(0, static_cast<SHORT>(scrolled.srWindow.Bottom - bottom)));
        moved          = rows - std::min(rows, viewMoved);
        return true;
    }

    // Moves the input line back down over the rows the scroll freed. It has to be a scroll like the
    // one above: the console drew the line here and redraws it here, so rewriting the cells by hand
    // would leave that record behind and put the next keystroke on an output row.
    static bool
    slideInputDown(HANDLE console, CONSOLE_SCREEN_BUFFER_INFO const& csbi, SHORT first, SHORT last, size_t rows) {
        SMALL_RECT source{0, first, static_cast<SHORT>(csbi.dwSize.X - 1), last};
        CHAR_INFO  fill{};
        fill.Char.UnicodeChar = L' ';
        fill.Attributes       = csbi.wAttributes;
        return ScrollConsoleScreenBufferW(console, &source, nullptr, COORD{0, static_cast<SHORT>(first + rows)}, &fill);
    }

    // Starts the output at `row` and remembers where typing continues.
    void protect(HANDLE console, SHORT row, COORD resumeAt) {
        SetConsoleCursorPosition(console, COORD{0, row});
        mResumeAt  = resumeAt;
        mProtected = true;
    }

    // Prints `message` above the pending input line instead of letting it land on top of the line.
    void preserve(std::string_view message) {
        auto                       console = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi{};
        if (!GetConsoleScreenBufferInfo(console, &csbi) || csbi.dwSize.X <= 0) return;
        // Typing keeps the cursor at the end of a non-blank row; column zero is the console's own
        // output, which is left alone so that it keeps scrolling.
        if (csbi.dwCursorPosition.X <= 0) return;

        auto top = inputTopRow(console, csbi);
        if (!hasInput(console, csbi, top)) return;

        auto rows = measureRows(string_utils::str2wstr(message), static_cast<size_t>(csbi.dwSize.X));
        if (rows == 0) return;

        // Give up before touching anything when the output cannot fit above the input line: the
        // scroll would move the line without leaving room for the output.
        auto roomBelow =
            static_cast<size_t>(std::max<SHORT>(0, static_cast<SHORT>(csbi.dwSize.Y - csbi.srWindow.Bottom - 1)));
        if (rows - std::min(rows, roomBelow) > static_cast<size_t>(top)) return;

        // Free `rows` rows right above the line; the line ends up back where it was on screen.
        size_t moved{};
        if (!scrollViewDown(console, csbi, rows, moved) || moved > static_cast<size_t>(top)) return;

        auto first = static_cast<SHORT>(static_cast<size_t>(top) - moved);
        auto last  = static_cast<SHORT>(static_cast<size_t>(csbi.dwCursorPosition.Y) - moved);
        if (!slideInputDown(console, csbi, first, last, rows)) return;

        protect(console, first, COORD{csbi.dwCursorPosition.X, static_cast<SHORT>(last + rows)});
    }
};

void PreserveInputLine::call(bool enabled) {
    if (enabled) {
        if (!impl) impl = std::make_unique<Impl>();
    } else {
        impl.reset();
    }
}

PreserveInputLine::PreserveInputLine()                                        = default;
PreserveInputLine::PreserveInputLine(PreserveInputLine&&) noexcept            = default;
PreserveInputLine& PreserveInputLine::operator=(PreserveInputLine&&) noexcept = default;
PreserveInputLine::~PreserveInputLine()                                       = default;

} // namespace ll
