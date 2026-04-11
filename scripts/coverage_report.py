from __future__ import annotations

import argparse
import html
import json
import re
from dataclasses import dataclass, field
from pathlib import Path
from typing import Iterable


@dataclass(slots=True)
class LineCoverage:
        line: int
        hit: bool
        address_count: int


@dataclass(slots=True)
class FunctionCoverage:
        name: str
        demangled_name: str
        source_file: str
        start_line: int
        end_line: int
        hit: bool
        address_count: int
        is_source_function: bool
        is_exported_function: bool
        start_address: str
        end_address: str
        module_name: str

        @property
        def display_name(self) -> str:
                return self.demangled_name or self.name or "(anonymous)"

        @property
        def tag_names(self) -> list[str]:
                tags: list[str] = []
                if self.is_source_function:
                        tags.append("source")
                if self.is_exported_function:
                        tags.append("exported")
                if not tags:
                        tags.append("other")
                return tags


@dataclass(slots=True)
class FileCoverage:
        path: str
        lines: list[LineCoverage] = field(default_factory=list)
        functions: list[FunctionCoverage] = field(default_factory=list)
        source_lines: list[str] = field(default_factory=list)
        source_error: str | None = None

        @property
        def covered_lines(self) -> int:
                return sum(1 for line in self.lines if line.hit)

        @property
        def total_lines(self) -> int:
                return len(self.lines)

        @property
        def missed_lines(self) -> int:
                return self.total_lines - self.covered_lines

        @property
        def coverage_ratio(self) -> float:
                if self.total_lines == 0:
                        return 1.0
                return self.covered_lines / self.total_lines

        @property
        def covered_functions(self) -> int:
                return sum(1 for function in self.functions if function.hit)

        @property
        def total_functions(self) -> int:
                return len(self.functions)

        @property
        def missed_functions(self) -> int:
                return self.total_functions - self.covered_functions

        @property
        def function_coverage_ratio(self) -> float:
                if self.total_functions == 0:
                        return 1.0
                return self.covered_functions / self.total_functions

        @property
        def uncovered_line_numbers(self) -> list[int]:
                return [line.line for line in self.lines if not line.hit]


def parse_args() -> argparse.Namespace:
        parser = argparse.ArgumentParser(
                description="Generate LCOV and interactive HTML reports from LeviLamina coverage JSON."
        )
        parser.add_argument("--hits", type=Path, required=True, help="Path to coverage_hits.json")
        parser.add_argument("--catalog", type=Path, required=False, help="Reserved for future use")
        parser.add_argument(
                "--workspace",
                type=Path,
                required=True,
                help="Workspace root used to resolve source paths such as src\\...",
        )
        parser.add_argument("--lcov-out", type=Path, required=False, help="Output path for lcov.info")
        parser.add_argument("--html-out", type=Path, required=False, help="Output path for HTML report")
        parser.add_argument(
                "--report-json-out",
                type=Path,
                required=False,
                help="Deprecated compatibility option; interactive HTML now embeds report data directly",
        )
        parser.add_argument("--title", default="LeviLamina Coverage Report", help="HTML report title")
        parser.add_argument(
                "--html-top-files",
                type=int,
            default=-1,
            help="Maximum number of files to surface in the initial file table; use -1 to show all files",
        )
        return parser.parse_args()


def load_json(path: Path) -> dict:
        return json.loads(path.read_text(encoding="utf-8"))


def to_workspace_path(workspace: Path, raw_path: str) -> Path:
        return workspace / Path(raw_path.replace("\\", "/"))


def load_source_lines(workspace: Path, raw_path: str) -> tuple[list[str], str | None]:
        source_path = to_workspace_path(workspace, raw_path)
        try:
                content = source_path.read_text(encoding="utf-8")
                return content.splitlines(), None
        except FileNotFoundError:
                return [], f"Source file not found in workspace: {source_path.as_posix()}"
        except UnicodeDecodeError:
                try:
                        content = source_path.read_text(encoding="utf-8-sig")
                        return content.splitlines(), None
                except Exception as exc:  # noqa: BLE001
                        return [], f"Unable to decode source file: {source_path.as_posix()} ({exc})"
        except Exception as exc:  # noqa: BLE001
                return [], f"Unable to load source file: {source_path.as_posix()} ({exc})"


def merge_lines(existing: list[LineCoverage], incoming: Iterable[LineCoverage]) -> list[LineCoverage]:
        dedup: dict[int, LineCoverage] = {line.line: line for line in existing}
        for line in incoming:
                current = dedup.get(line.line)
                if current is None:
                        dedup[line.line] = line
                        continue
                dedup[line.line] = LineCoverage(
                        line=line.line,
                        hit=current.hit or line.hit,
                        address_count=max(current.address_count, line.address_count),
                )
        return sorted(dedup.values(), key=lambda item: item.line)


def function_key(function: FunctionCoverage) -> tuple[str, str, int, int, str, str, str]:
        return (
                function.source_file,
                function.demangled_name or function.name,
                function.start_line,
                function.end_line,
                function.start_address,
                function.end_address,
                function.module_name,
        )


def merge_functions(existing: list[FunctionCoverage], incoming: Iterable[FunctionCoverage]) -> list[FunctionCoverage]:
        merged: dict[tuple[str, str, int, int, str, str, str], FunctionCoverage] = {
                function_key(function): function for function in existing
        }
        for function in incoming:
                key = function_key(function)
                current = merged.get(key)
                if current is None:
                        merged[key] = function
                        continue
                merged[key] = FunctionCoverage(
                        name=current.name or function.name,
                        demangled_name=current.demangled_name or function.demangled_name,
                        source_file=current.source_file,
                        start_line=current.start_line or function.start_line,
                        end_line=max(current.end_line, function.end_line),
                        hit=current.hit or function.hit,
                        address_count=max(current.address_count, function.address_count),
                        is_source_function=current.is_source_function or function.is_source_function,
                        is_exported_function=current.is_exported_function or function.is_exported_function,
                        start_address=current.start_address or function.start_address,
                        end_address=current.end_address or function.end_address,
                        module_name=current.module_name or function.module_name,
                )
        return sorted(
                merged.values(),
                key=lambda item: (
                        item.start_line if item.start_line > 0 else 10**9,
                        item.end_line if item.end_line > 0 else 10**9,
                        item.display_name.lower(),
                ),
        )


def collect_files(hits_data: dict, workspace: Path) -> list[FileCoverage]:
        files: dict[str, FileCoverage] = {}

        for module in hits_data.get("modules", []):
                module_name = str(module.get("name", ""))

                for file_entry in module.get("files", []):
                        path = str(file_entry["path"])
                        file_coverage = files.get(path)
                        if file_coverage is None:
                                source_lines, source_error = load_source_lines(workspace, path)
                                file_coverage = FileCoverage(path=path, source_lines=source_lines, source_error=source_error)
                                files[path] = file_coverage

                        new_lines = [
                                LineCoverage(
                                        line=int(line_entry["line"]),
                                        hit=bool(line_entry.get("hit", False)),
                                        address_count=int(line_entry.get("addressCount", 0)),
                                )
                                for line_entry in file_entry.get("lines", [])
                        ]
                        file_coverage.lines = merge_lines(file_coverage.lines, new_lines)

                for function_entry in module.get("functions", []):
                        source_file = str(function_entry.get("sourceFile", ""))
                        if not source_file:
                                continue

                        file_coverage = files.get(source_file)
                        if file_coverage is None:
                                source_lines, source_error = load_source_lines(workspace, source_file)
                                file_coverage = FileCoverage(path=source_file, source_lines=source_lines, source_error=source_error)
                                files[source_file] = file_coverage

                        function = FunctionCoverage(
                                name=str(function_entry.get("name", "")),
                                demangled_name=str(function_entry.get("demangledName", "")),
                                source_file=source_file,
                                start_line=int(function_entry.get("startLine", 0) or 0),
                                end_line=int(function_entry.get("endLine", 0) or 0),
                                hit=bool(function_entry.get("hit", False)),
                                address_count=int(function_entry.get("addressCount", 0) or 0),
                                is_source_function=bool(function_entry.get("isSourceFunction", False)),
                                is_exported_function=bool(function_entry.get("isExportedFunction", False)),
                                start_address=str(function_entry.get("start", "")),
                                end_address=str(function_entry.get("end", "")),
                                module_name=module_name,
                        )
                        file_coverage.functions = merge_functions(file_coverage.functions, [function])

        return sorted(files.values(), key=lambda item: item.path)


def generate_lcov(files: Iterable[FileCoverage], workspace: Path) -> str:
        chunks: list[str] = []
        for file in files:
                source_path = to_workspace_path(workspace, file.path)
                chunks.append(f"SF:{source_path.as_posix()}")
                for line in file.lines:
                        chunks.append(f"DA:{line.line},{1 if line.hit else 0}")
                chunks.append(f"LF:{file.total_lines}")
                chunks.append(f"LH:{file.covered_lines}")
                chunks.append("end_of_record")
        return "\n".join(chunks) + "\n"


def coverage_bucket(ratio: float, *, empty_as_neutral: bool = False) -> str:
        if empty_as_neutral and ratio >= 1.0:
                return "none"
        if ratio >= 0.999:
                return "good"
        if ratio <= 0.0:
                return "bad"
        if ratio < 0.6:
                return "warn"
        return "mid"


def build_report_payload(files: list[FileCoverage], top_files: int) -> dict:
        total_lines = sum(file.total_lines for file in files)
        covered_lines = sum(file.covered_lines for file in files)
        total_functions = sum(file.total_functions for file in files)
        covered_functions = sum(file.covered_functions for file in files)
        files_with_source = sum(1 for file in files if file.source_lines)
        files_without_source = len(files) - files_with_source
        perfect_files = sum(1 for file in files if file.total_lines > 0 and file.coverage_ratio >= 1.0)
        zero_files = sum(1 for file in files if file.total_lines > 0 and file.coverage_ratio <= 0.0)
        partial_files = sum(1 for file in files if 0.0 < file.coverage_ratio < 1.0)

        ranked_files = sorted(
                files,
                key=lambda item: (item.coverage_ratio, -item.missed_lines, -item.total_lines, item.path.lower()),
        )
        if top_files >= 0:
                ranked_files = ranked_files[:top_files]

        file_items: list[dict] = []
        for file in ranked_files:
                line_states = {line.line: {"hit": line.hit, "addressCount": line.address_count} for line in file.lines}
                function_items = [
                        {
                                "id": f"{file.path}:{index}",
                                "name": function.display_name,
                                "rawName": function.name,
                                "demangledName": function.demangled_name,
                                "startLine": function.start_line,
                                "endLine": function.end_line,
                                "hit": function.hit,
                                "addressCount": function.address_count,
                                "tags": function.tag_names,
                                "moduleName": function.module_name,
                                "startAddress": function.start_address,
                                "endAddress": function.end_address,
                        }
                        for index, function in enumerate(file.functions)
                ]

                source_items = [
                        {
                                "lineNumber": index + 1,
                                "text": source_line,
                                "coverage": line_states.get(index + 1),
                        }
                        for index, source_line in enumerate(file.source_lines)
                ]

                file_items.append(
                        {
                                "path": file.path,
                                "coveredLines": file.covered_lines,
                                "totalLines": file.total_lines,
                                "missedLines": file.missed_lines,
                                "lineCoverageRatio": file.coverage_ratio,
                                "coveredFunctions": file.covered_functions,
                                "totalFunctions": file.total_functions,
                                "missedFunctions": file.missed_functions,
                                "functionCoverageRatio": file.function_coverage_ratio,
                                "uncoveredLines": file.uncovered_line_numbers,
                                "sourceAvailable": bool(file.source_lines),
                                "sourceError": file.source_error,
                                "sourceLines": source_items,
                                "functions": function_items,
                                "lineBucket": coverage_bucket(file.coverage_ratio, empty_as_neutral=file.total_lines == 0),
                                "functionBucket": coverage_bucket(
                                        file.function_coverage_ratio, empty_as_neutral=file.total_functions == 0
                                ),
                        }
                )

        return {
                "summary": {
                        "fileCount": len(files),
                        "visibleFileCount": len(file_items),
                        "coveredLines": covered_lines,
                        "totalLines": total_lines,
                        "lineCoverageRatio": (covered_lines / total_lines) if total_lines else 1.0,
                        "coveredFunctions": covered_functions,
                        "totalFunctions": total_functions,
                        "functionCoverageRatio": (covered_functions / total_functions) if total_functions else 1.0,
                        "perfectFiles": perfect_files,
                        "partialFiles": partial_files,
                        "zeroFiles": zero_files,
                        "filesWithSource": files_with_source,
                        "filesWithoutSource": files_without_source,
                },
                "files": file_items,
        }


def generate_report_json(payload: dict) -> str:
        return json.dumps(payload, ensure_ascii=False, separators=(",", ":"))


def language_from_path(raw_path: str) -> str:
        suffix = Path(raw_path).suffix.lower()
        if suffix in {".hpp", ".h", ".hh", ".hxx"}:
                return "cpp-header"
        if suffix in {".cpp", ".cc", ".cxx", ".c", ".ipp", ".inl"}:
                return "cpp"
        return "text"


def render_html(payload: dict, title: str) -> str:
    safe_title = html.escape(title)
    report_json = generate_report_json(payload)
    return fr'''<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <title>{safe_title}</title>
    <style>
        :root {{
            color-scheme: light;
            --bg: #f6f8fb;
            --panel: #ffffff;
            --panel-alt: #f9fbff;
            --border: #d7deea;
            --text: #1d2433;
            --muted: #667089;
            --good-bg: #e8f7ec;
            --good-text: #156c2f;
            --mid-bg: #eef5ff;
            --mid-text: #1f5ca7;
            --warn-bg: #fff4df;
            --warn-text: #9a5a00;
            --bad-bg: #fdeaea;
            --bad-text: #9f1f1f;
            --none-bg: #eef1f6;
            --none-text: #556070;
            --selected: #dceaff;
            --shadow: 0 8px 24px rgba(20, 34, 66, 0.08);
            --font: "Segoe UI", system-ui, sans-serif;
            --mono: "Cascadia Code", "Consolas", monospace;
        }}
        * {{ box-sizing: border-box; }}
        body {{ margin: 0; background: var(--bg); color: var(--text); font-family: var(--font); }}
        .page {{ max-width: 1880px; margin: 0 auto; padding: 18px; }}
        .hero {{ display: flex; justify-content: space-between; gap: 16px; align-items: flex-end; margin-bottom: 14px; }}
        .hero h1 {{ margin: 0 0 6px; font-size: 28px; }}
        .hero p {{ margin: 0; color: var(--muted); }}
        .badge {{ display: inline-flex; align-items: center; gap: 8px; padding: 8px 12px; border-radius: 999px; background: var(--panel); border: 1px solid var(--border); box-shadow: var(--shadow); white-space: nowrap; }}
        .cards {{ display: grid; grid-template-columns: repeat(auto-fit, minmax(170px, 1fr)); gap: 10px; margin-bottom: 14px; }}
        .card {{ background: var(--panel); border: 1px solid var(--border); border-radius: 14px; box-shadow: var(--shadow); padding: 12px 14px; }}
        .card .label {{ color: var(--muted); font-size: 12px; margin-bottom: 6px; }}
        .card .value {{ font-size: 24px; font-weight: 700; }}
        .card .sub {{ margin-top: 4px; color: var(--muted); font-size: 12px; }}
        .layout {{ display: grid; grid-template-columns: 380px minmax(0, 1fr); gap: 14px; align-items: start; }}
        .panel {{ background: var(--panel); border: 1px solid var(--border); border-radius: 16px; box-shadow: var(--shadow); overflow: hidden; }}
        .panel-header {{ display: flex; justify-content: space-between; align-items: center; gap: 10px; padding: 12px 14px; border-bottom: 1px solid var(--border); background: var(--panel-alt); }}
        .panel-header h2, .panel-header h3 {{ margin: 0; font-size: 16px; }}
        .panel-header .meta {{ color: var(--muted); font-size: 12px; }}
        .panel-body {{ padding: 12px 14px; }}
        .panel-stack {{ display: grid; gap: 12px; }}
        .hint {{ color: var(--muted); font-size: 12px; }}
        .file-column {{ position: sticky; top: 18px; height: calc(100vh - 36px); display: grid; grid-template-rows: auto minmax(0, 1fr); }}
        .detail-column {{ min-width: 0; }}
        .sidebar-panel {{ display: grid; grid-template-rows: auto minmax(0, 1fr); min-height: 0; height: 100%; }}
        .sidebar-toolbar {{ display: flex; gap: 8px; flex-wrap: wrap; margin-bottom: 10px; }}
        .sort-chip {{ border: 1px solid var(--border); background: var(--panel-alt); color: var(--muted); border-radius: 999px; padding: 5px 10px; font: inherit; font-size: 12px; cursor: pointer; }}
        .sort-chip.is-active {{ color: var(--text); background: var(--selected); border-color: #b9cff7; }}
        .file-sidebar-body {{ min-height: 0; overflow: auto; padding-right: 2px; }}
        .file-list {{ display: grid; gap: 8px; }}
        .file-item {{ width: 100%; border: 1px solid var(--border); background: var(--panel); border-radius: 12px; padding: 10px 12px; text-align: left; cursor: pointer; }}
        .file-item:hover {{ background: #f7faff; }}
        .file-item.is-selected {{ background: var(--selected); border-color: #b9cff7; }}
        .file-item-top {{ display: grid; grid-template-columns: minmax(0, 1fr) auto; gap: 10px; align-items: start; margin-bottom: 8px; }}
        .file-item-metrics {{ display: grid; grid-template-columns: repeat(2, minmax(0, auto)); gap: 10px 12px; color: var(--muted); font-size: 12px; }}
        table {{ width: 100%; border-collapse: collapse; }}
        th, td {{ padding: 8px 10px; border-bottom: 1px solid var(--border); text-align: left; vertical-align: top; }}
        th {{ font-size: 12px; text-transform: uppercase; letter-spacing: 0.04em; color: var(--muted); background: var(--panel-alt); }}
        th button {{ border: none; background: transparent; color: inherit; font: inherit; padding: 0; cursor: pointer; display: inline-flex; align-items: center; gap: 6px; }}
        tbody tr {{ cursor: pointer; }}
        tbody tr:hover {{ background: #f7faff; }}
        tbody tr.is-selected {{ background: var(--selected); }}
        .path {{ min-width: 0; max-width: 100%; overflow: hidden; }}
        .path-scroll {{ display: block; width: 100%; font-family: var(--mono); font-size: 12px; white-space: nowrap; overflow: hidden; text-overflow: ellipsis; direction: rtl; text-align: left; }}
        .path-text {{ display: inline; }}
        .metric {{ font-variant-numeric: tabular-nums; white-space: nowrap; }}
        .pill {{ display: inline-flex; align-items: center; gap: 6px; padding: 3px 8px; border-radius: 999px; font-size: 11px; font-weight: 600; white-space: nowrap; }}
        .bucket-good {{ background: var(--good-bg); color: var(--good-text); }}
        .bucket-mid {{ background: var(--mid-bg); color: var(--mid-text); }}
        .bucket-warn {{ background: var(--warn-bg); color: var(--warn-text); }}
        .bucket-bad {{ background: var(--bad-bg); color: var(--bad-text); }}
        .bucket-none {{ background: var(--none-bg); color: var(--none-text); }}
        .file-summary {{ display: grid; grid-template-columns: repeat(auto-fit, minmax(160px, 1fr)); gap: 10px; }}
        .summary-box {{ border: 1px solid var(--border); border-radius: 12px; padding: 10px 12px; background: var(--panel-alt); }}
        .summary-box .title {{ font-size: 11px; color: var(--muted); margin-bottom: 6px; text-transform: uppercase; }}
        .summary-box .number {{ font-size: 21px; font-weight: 700; }}
        .details-grid {{ display: grid; gap: 10px; }}
        .function-header {{ display: flex; justify-content: space-between; align-items: center; gap: 8px; flex-wrap: wrap; }}
        .function-meta {{ color: var(--muted); font-size: 12px; }}
        .tags {{ display: flex; gap: 6px; flex-wrap: wrap; }}
        .function-table-scroll {{ max-height: 360px; overflow: auto; border: 1px solid var(--border); border-radius: 10px; }}
        .function-table-scroll thead th {{ position: sticky; top: 0; z-index: 1; background: var(--panel-alt); }}
        .source-shell {{ border: 1px solid var(--border); border-radius: 14px; overflow: hidden; background: #fbfcfe; }}
        .source-header {{ padding: 10px 12px; border-bottom: 1px solid var(--border); background: var(--panel-alt); display: flex; justify-content: space-between; gap: 10px; align-items: center; flex-wrap: wrap; }}
        .source-scroll {{ max-height: 68vh; overflow: auto; }}
        .source-content {{ min-width: 100%; width: max-content; }}
        .source-line {{ display: grid; grid-template-columns: 64px minmax(0, 1fr); gap: 10px; padding: 0 12px; font-family: var(--mono); font-size: 12px; line-height: 1.55; border-left: 4px solid transparent; scroll-margin-top: 120px; min-width: max-content; }}
        .source-line .line-no {{ color: #788196; text-align: right; user-select: none; padding: 2px 0; }}
        .source-line .code {{ white-space: pre; overflow: visible; padding: 2px 0; }}
        .source-line.is-covered {{ background: rgba(24, 134, 58, 0.07); border-left-color: #18863a; }}
        .source-line.is-missed {{ background: rgba(191, 31, 31, 0.08); border-left-color: #bf1f1f; }}
        .source-line.is-neutral {{ background: transparent; border-left-color: transparent; }}
        .source-line.is-highlight-single,
        .source-line.is-highlight-start,
        .source-line.is-highlight-mid,
        .source-line.is-highlight-end {{
            position: relative;
            isolation: isolate;
        }}
        .source-line.is-highlight-single .line-no,
        .source-line.is-highlight-start .line-no,
        .source-line.is-highlight-mid .line-no,
        .source-line.is-highlight-end .line-no {{
            color: #1d4ed8;
            font-weight: 700;
        }}
        .source-line.is-highlight-single::before,
        .source-line.is-highlight-start::before,
        .source-line.is-highlight-mid::before,
        .source-line.is-highlight-end::before {{
            content: "";
            position: absolute;
            inset: 0;
            pointer-events: none;
            background: rgba(59, 130, 246, 0.16);
            mix-blend-mode: multiply;
        }}
        .source-line.is-highlight-single::after,
        .source-line.is-highlight-start::after,
        .source-line.is-highlight-mid::after,
        .source-line.is-highlight-end::after {{
            content: "";
            position: absolute;
            inset: 0;
            pointer-events: none;
            box-shadow: inset 2px 0 0 #3b82f6, inset -2px 0 0 #3b82f6;
        }}
        .source-line.is-highlight-single::after {{
            box-shadow: inset 2px 0 0 #3b82f6, inset -2px 0 0 #3b82f6, inset 0 2px 0 #3b82f6, inset 0 -2px 0 #3b82f6;
        }}
        .source-line.is-highlight-start::after {{
            box-shadow: inset 2px 0 0 #3b82f6, inset -2px 0 0 #3b82f6, inset 0 2px 0 #3b82f6;
        }}
        .source-line.is-highlight-mid {{
            box-shadow: inset 36px 0 0 rgba(59, 130, 246, 0.06);
        }}
        .source-line.is-highlight-end::after {{
            box-shadow: inset 2px 0 0 #3b82f6, inset -2px 0 0 #3b82f6, inset 0 -2px 0 #3b82f6;
        }}
        .source-line.is-hidden {{ display: none; }}
        .source-gap {{ display: flex; align-items: center; justify-content: space-between; gap: 12px; padding: 8px 12px; border-top: 1px dashed var(--border); border-bottom: 1px dashed var(--border); background: #f5f8fe; color: var(--muted); font-size: 12px; }}
        .source-gap button {{ border: 1px solid var(--border); background: var(--panel); border-radius: 999px; padding: 4px 10px; font: inherit; cursor: pointer; color: var(--text); }}
        .token-keyword {{ color: #7c3aed; font-weight: 600; }}
        .token-type {{ color: #0f766e; }}
        .token-number {{ color: #b45309; }}
        .token-string {{ color: #0f766e; }}
        .token-comment {{ color: #6b7280; font-style: italic; }}
        .token-preprocessor {{ color: #2563eb; }}
        .empty {{ padding: 16px; border: 1px dashed var(--border); border-radius: 12px; color: var(--muted); background: #fbfcff; }}
        .error {{ color: var(--bad-text); background: var(--bad-bg); padding: 12px 14px; border-radius: 12px; }}
        .loading {{ padding: 36px 18px; color: var(--muted); text-align: center; }}
        .file-sidebar-body, .function-table-scroll, .source-scroll {{ scrollbar-width: none; -ms-overflow-style: none; }}
        .file-sidebar-body::-webkit-scrollbar, .function-table-scroll::-webkit-scrollbar, .source-scroll::-webkit-scrollbar {{ width: 0; height: 0; display: none; }}
        @media (max-width: 1280px) {{
            .layout {{ grid-template-columns: 1fr; }}
            .file-column {{ position: static; height: auto; }}
            .sidebar-panel {{ height: auto; }}
            .file-sidebar-body {{ max-height: 52vh; }}
        }}
    </style>
</head>
<body>
    <div class="page">
        <div class="hero">
            <div>
                <h1>{safe_title}</h1>
                <p>Interactive coverage report with sortable file list, compact drill-down, and source preview loaded from external data.</p>
            </div>
            <div class="badge" id="hero-badge"></div>
        </div>
        <div class="cards" id="summary-cards"></div>
        <div class="layout">
            <section class="panel file-column">
                <div class="panel-header">
                    <div>
                        <h2>Files</h2>
                        <div class="meta" id="files-meta"></div>
                    </div>
                    <div class="hint">Scrollable sidebar with compact file summaries.</div>
                </div>
                <div class="panel-body sidebar-panel" id="files-table"></div>
            </section>
            <section class="panel detail-column">
                <div class="panel-header">
                    <div>
                        <h2 id="detail-title">Select a file</h2>
                        <div class="meta" id="detail-meta">Choose a file from the table to inspect details.</div>
                    </div>
                    <div class="hint" id="detail-hint"></div>
                </div>
                <div class="panel-body panel-stack" id="detail-panel"></div>
            </section>
        </div>
    </div>
    <script>
        const report = {report_json};
        const state = {{
            fileSort: {{ key: 'lineCoverageRatio', dir: 'asc' }},
            functionSort: {{ key: 'startLine', dir: 'asc' }},
            selectedFilePath: null,
            selectedFunctionId: null,
            collapsedNeutralGroups: new Set(),
        }};
        const dom = {{
            heroBadge: document.getElementById('hero-badge'),
            summaryCards: document.getElementById('summary-cards'),
            filesMeta: document.getElementById('files-meta'),
            filesTable: document.getElementById('files-table'),
            detailTitle: document.getElementById('detail-title'),
            detailMeta: document.getElementById('detail-meta'),
            detailHint: document.getElementById('detail-hint'),
            detailPanel: document.getElementById('detail-panel'),
        }};
        const fileColumns = [
            {{ key: 'path', label: 'File' }},
            {{ key: 'lineCoverageRatio', label: 'Line Coverage' }},
            {{ key: 'coveredLines', label: 'Covered' }},
            {{ key: 'totalLines', label: 'Total' }},
            {{ key: 'missedLines', label: 'Missed' }},
            {{ key: 'functionCoverageRatio', label: 'Function Coverage' }},
            {{ key: 'totalFunctions', label: 'Functions' }},
        ];
        const functionColumns = [
            {{ key: 'name', label: 'Function' }},
            {{ key: 'hit', label: 'Hit' }},
            {{ key: 'startLine', label: 'Start' }},
            {{ key: 'endLine', label: 'End' }},
            {{ key: 'addressCount', label: 'Addresses' }},
            {{ key: 'moduleName', label: 'Module' }},
        ];
        function escapeHtml(value) {{
            return String(value)
                .replaceAll('&', '&amp;')
                .replaceAll('<', '&lt;')
                .replaceAll('>', '&gt;')
                .replaceAll('"', '&quot;')
                .replaceAll("'", '&#39;');
        }}
        function percent(ratio) {{
            return `${{(ratio * 100).toFixed(1)}}%`;
        }}
        function bucketClass(bucket) {{
            return `bucket-${{bucket}}`;
        }}
        function reportData() {{
            return report;
        }}
        function coverageBucket(ratio, emptyAsNeutral = false) {{
            if (emptyAsNeutral && ratio >= 1) return 'none';
            if (ratio >= 0.999) return 'good';
            if (ratio <= 0) return 'bad';
            if (ratio < 0.6) return 'warn';
            return 'mid';
        }}
        function inferLanguage(path) {{
            const lower = path.toLowerCase();
            if ([".hpp", ".h", ".hh", ".hxx"].some((suffix) => lower.endsWith(suffix))) return 'cpp-header';
            if ([".cpp", ".cc", ".cxx", ".c", ".ipp", ".inl"].some((suffix) => lower.endsWith(suffix))) return 'cpp';
            return 'text';
        }}
        function highlightCode(text, language) {{
            const keywords = new Set([
                'alignas','alignof','asm','auto','bool','break','case','catch','char','char8_t','char16_t','char32_t',
                'class','concept','const','consteval','constexpr','constinit','continue','co_await','co_return','co_yield',
                'decltype','default','delete','do','double','else','enum','explicit','export','extern','false','final',
                'float','for','friend','goto','if','import','inline','int','long','mutable','namespace','new','noexcept',
                'nullptr','operator','override','private','protected','public','register','requires','return','short',
                'signed','sizeof','static','struct','switch','template','this','thread_local','throw','true','try',
                'typedef','typeid','typename','union','unsigned','using','virtual','void','volatile','while'
            ]);
            const types = new Set(['size_t','std','string','wstring','u8string','vector','map','set','unordered_map','optional']);
            const source = String(text || ' ');
            if (language === 'text') return escapeHtml(source);

            const segments = [];
            let cursor = 0;
            while (cursor < source.length) {{
                const commentIndex = source.indexOf('//', cursor);
                const stringMatch = /"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*'/.exec(source.slice(cursor));
                const stringIndex = stringMatch ? cursor + stringMatch.index : -1;

                if (commentIndex !== -1 && (stringIndex === -1 || commentIndex < stringIndex)) {{
                    if (commentIndex > cursor) {{
                        segments.push({{ type: 'code', text: source.slice(cursor, commentIndex) }});
                    }}
                    segments.push({{ type: 'comment', text: source.slice(commentIndex) }});
                    cursor = source.length;
                    break;
                }}

                if (stringMatch && stringIndex >= cursor) {{
                    if (stringIndex > cursor) {{
                        segments.push({{ type: 'code', text: source.slice(cursor, stringIndex) }});
                    }}
                    segments.push({{ type: 'string', text: stringMatch[0] }});
                    cursor = stringIndex + stringMatch[0].length;
                    continue;
                }}

                segments.push({{ type: 'code', text: source.slice(cursor) }});
                cursor = source.length;
            }}

            const renderCodeSegment = (segmentText) => {{
                const tokenPattern = /\b\d+(?:\.\d+)?\b|\b[A-Za-z_][A-Za-z0-9_:]*\b/g;
                let cursor = 0;
                let output = '';
                for (const match of segmentText.matchAll(tokenPattern)) {{
                    const index = match.index ?? 0;
                    if (index > cursor) output += escapeHtml(segmentText.slice(cursor, index));
                    const token = match[0];
                    if (/^\d/.test(token)) {{
                        output += `<span class="token-number">${{escapeHtml(token)}}</span>`;
                    }} else {{
                        const last = token.split('::').pop();
                        if (keywords.has(last)) output += `<span class="token-keyword">${{escapeHtml(token)}}</span>`;
                        else if (types.has(last) || /^[A-Z]/.test(last)) output += `<span class="token-type">${{escapeHtml(token)}}</span>`;
                        else output += escapeHtml(token);
                    }}
                    cursor = index + token.length;
                }}
                if (cursor < segmentText.length) output += escapeHtml(segmentText.slice(cursor));
                return output;
            }};

            const rendered = segments.map((segment) => {{
                if (segment.type === 'comment') return `<span class="token-comment">${{escapeHtml(segment.text)}}</span>`;
                if (segment.type === 'string') return `<span class="token-string">${{escapeHtml(segment.text)}}</span>`;
                return renderCodeSegment(segment.text);
            }}).join('');

            return source.trimStart().startsWith('#')
                ? `<span class="token-preprocessor">${{rendered}}</span>`
                : rendered;
        }}
        function compareValues(a, b, key, dir) {{
            const sign = dir === 'asc' ? 1 : -1;
            const left = a[key];
            const right = b[key];
            if (typeof left === 'number' && typeof right === 'number') return (left - right) * sign;
            if (typeof left === 'boolean' && typeof right === 'boolean') return (left === right ? 0 : left ? 1 : -1) * sign;
            return String(left).localeCompare(String(right), undefined, {{ sensitivity: 'base' }}) * sign;
        }}
        function setFileSort(key) {{
            if (state.fileSort.key === key) state.fileSort.dir = state.fileSort.dir === 'asc' ? 'desc' : 'asc';
            else state.fileSort = {{ key, dir: 'asc' }};
            renderFiles();
        }}
        function setFunctionSort(key) {{
            if (state.functionSort.key === key) state.functionSort.dir = state.functionSort.dir === 'asc' ? 'desc' : 'asc';
            else state.functionSort = {{ key, dir: 'asc' }};
            renderDetail();
        }}
        function sortedFiles() {{
            return [...reportData().files].sort((a, b) => {{
                const primary = compareValues(a, b, state.fileSort.key, state.fileSort.dir);
                return primary !== 0 ? primary : a.path.localeCompare(b.path, undefined, {{ sensitivity: 'base' }});
            }});
        }}
        function sortedFunctions(file) {{
            return [...file.functions].sort((a, b) => {{
                const primary = compareValues(a, b, state.functionSort.key, state.functionSort.dir);
                return primary !== 0 ? primary : a.name.localeCompare(b.name, undefined, {{ sensitivity: 'base' }});
            }});
        }}
        function getSelectedFile() {{
            const files = sortedFiles();
            if (!files.length) return null;
            return files.find((file) => file.path === state.selectedFilePath) ?? files[0];
        }}
        function updateHash(filePath, functionId = null) {{
            const params = new URLSearchParams();
            params.set('file', filePath);
            if (functionId) params.set('fn', functionId);
            history.replaceState(null, '', `#${{params.toString()}}`);
        }}
        function restoreHashSelection() {{
            const params = new URLSearchParams(window.location.hash.replace(/^#/, ''));
            const file = params.get('file');
            const fn = params.get('fn');
            if (file) state.selectedFilePath = file;
            if (fn) state.selectedFunctionId = fn;
        }}
        function collapseKey(filePath, startLine, endLine) {{
            return `${{filePath}}:${{startLine}}-${{endLine}}`;
        }}
        function buildSourceSegments(file) {{
            const segments = [];
            const threshold = 10;
            let neutralStart = null;
            const flushNeutral = (endIndex) => {{
                if (neutralStart === null) return;
                const count = endIndex - neutralStart;
                if (count >= threshold) {{
                    const startLine = file.sourceLines[neutralStart].lineNumber;
                    const endLine = file.sourceLines[endIndex - 1].lineNumber;
                    segments.push({{ type: 'neutral-group', startLine, endLine, lines: file.sourceLines.slice(neutralStart, endIndex) }});
                }} else {{
                    for (let index = neutralStart; index < endIndex; index += 1) {{
                        segments.push({{ type: 'line', line: file.sourceLines[index] }});
                    }}
                }}
                neutralStart = null;
            }};
            file.sourceLines.forEach((line, index) => {{
                if (!line.coverage) {{
                    if (neutralStart === null) neutralStart = index;
                    return;
                }}
                flushNeutral(index);
                segments.push({{ type: 'line', line }});
            }});
            flushNeutral(file.sourceLines.length);
            return segments;
        }}
        function renderSummary() {{
            const summary = reportData().summary;
            const lineBucket = coverageBucket(summary.lineCoverageRatio, summary.totalLines === 0);
            const functionBucket = coverageBucket(summary.functionCoverageRatio, summary.totalFunctions === 0);
            dom.heroBadge.className = `badge ${{bucketClass(lineBucket)}}`;
            dom.heroBadge.textContent = `Overall line coverage ${{percent(summary.lineCoverageRatio)}}`;
            const cards = [
                {{ label: 'Files', value: summary.fileCount, sub: `${{summary.visibleFileCount}} shown in table` }},
                {{ label: 'Line Coverage', value: percent(summary.lineCoverageRatio), sub: `${{summary.coveredLines}} / ${{summary.totalLines}} lines`, bucket: lineBucket }},
                {{ label: 'Function Coverage', value: percent(summary.functionCoverageRatio), sub: `${{summary.coveredFunctions}} / ${{summary.totalFunctions}} functions`, bucket: functionBucket }},
                {{ label: 'Perfect Files', value: summary.perfectFiles, sub: `${{summary.partialFiles}} partial · ${{summary.zeroFiles}} zero` }},
                {{ label: 'Source Preview', value: summary.filesWithSource, sub: `${{summary.filesWithoutSource}} files unavailable` }},
            ];
            dom.summaryCards.innerHTML = cards.map((card) => `
                <div class="card ${{card.bucket ? bucketClass(card.bucket) : ''}}">
                    <div class="label">${{escapeHtml(card.label)}}</div>
                    <div class="value">${{escapeHtml(card.value)}}</div>
                    <div class="sub">${{escapeHtml(card.sub)}}</div>
                </div>`).join('');
            dom.filesMeta.textContent = `${{summary.visibleFileCount}} files available in the interactive table.`;
        }}
        function renderFiles() {{
            const files = sortedFiles();
            if (!state.selectedFilePath && files.length) state.selectedFilePath = files[0].path;
            const sortChoices = [
                {{ key: 'path', label: 'Path' }},
                {{ key: 'lineCoverageRatio', label: 'Line coverage' }},
                {{ key: 'missedLines', label: 'Missed lines' }},
                {{ key: 'functionCoverageRatio', label: 'Function coverage' }},
            ];
            dom.filesTable.innerHTML = `
                <div class="sidebar-toolbar">
                    ${{sortChoices.map((choice) => {{
                        const arrow = state.fileSort.key === choice.key ? (state.fileSort.dir === 'asc' ? '↑' : '↓') : '';
                        const cls = state.fileSort.key === choice.key ? 'sort-chip is-active' : 'sort-chip';
                        return `<button type="button" class="${{cls}}" data-file-sort="${{choice.key}}">${{escapeHtml(choice.label)}}${{arrow ? ` <span>${{arrow}}</span>` : ''}}</button>`;
                    }}).join('')}}
                </div>
                <div class="file-sidebar-body">
                    <div class="file-list">
                        ${{files.map((file) => `
                            <button type="button" class="file-item ${{file.path === state.selectedFilePath ? 'is-selected' : ''}}" data-file-path="${{escapeHtml(file.path)}}">
                                <div class="file-item-top">
                                    <div class="path"><div class="path-scroll" title="${{escapeHtml(file.path)}}"><span class="path-text">${{escapeHtml(file.path)}}</span></div></div>
                                    <span class="pill ${{bucketClass(file.lineBucket)}}">${{percent(file.lineCoverageRatio)}}</span>
                                </div>
                                <div class="file-item-metrics">
                                    <span>Lines <strong>${{file.coveredLines}} / ${{file.totalLines}}</strong></span>
                                    <span>Missed <strong>${{file.missedLines}}</strong></span>
                                    <span>Funcs <strong>${{file.coveredFunctions}} / ${{file.totalFunctions}}</strong></span>
                                    <span><span class="pill ${{bucketClass(file.functionBucket)}}">${{percent(file.functionCoverageRatio)}}</span></span>
                                </div>
                            </button>`).join('')}}
                    </div>
                </div>`;
            dom.filesTable.querySelectorAll('[data-file-sort]').forEach((button) => button.addEventListener('click', () => setFileSort(button.dataset.fileSort)));
            dom.filesTable.querySelectorAll('[data-file-path]').forEach((row) => row.addEventListener('click', () => {{
                state.selectedFilePath = row.dataset.filePath;
                state.selectedFunctionId = null;
                updateHash(state.selectedFilePath);
                renderFiles();
                renderDetail();
            }}));
        }}
        function revealNeutralGroup(file, startLine, endLine) {{
            state.collapsedNeutralGroups.delete(collapseKey(file.path, startLine, endLine));
        }}
        function highlightFunction(file, functionId) {{
            const fn = file.functions.find((item) => item.id === functionId);
            if (!fn) return;
            const start = Math.max(1, fn.startLine || 1);
            const end = Math.max(start, fn.endLine || start);
            buildSourceSegments(file)
                .filter((segment) => segment.type === 'neutral-group' && segment.startLine <= start && segment.endLine >= start)
                .forEach((segment) => revealNeutralGroup(file, segment.startLine, segment.endLine));
            document.querySelectorAll('.source-line.is-highlight-single, .source-line.is-highlight-start, .source-line.is-highlight-mid, .source-line.is-highlight-end')
                .forEach((line) => line.classList.remove('is-highlight-single', 'is-highlight-start', 'is-highlight-mid', 'is-highlight-end'));
            for (let lineNumber = start; lineNumber <= end; lineNumber += 1) {{
                const element = document.getElementById(`source-${{lineNumber}}`);
                if (!element) continue;
                if (start === end) element.classList.add('is-highlight-single');
                else if (lineNumber === start) element.classList.add('is-highlight-start');
                else if (lineNumber === end) element.classList.add('is-highlight-end');
                else element.classList.add('is-highlight-mid');
            }}
            const target = document.getElementById(`source-${{start}}`);
            if (target) target.scrollIntoView({{ behavior: 'smooth', block: 'center' }});
        }}
        function renderDetail() {{
            const file = getSelectedFile();
            if (!file) {{
                dom.detailTitle.textContent = 'No files available';
                dom.detailMeta.textContent = 'The report does not contain any file coverage entries.';
                dom.detailHint.textContent = '';
                dom.detailPanel.innerHTML = '<div class="empty">Nothing to show.</div>';
                return;
            }}
            state.selectedFilePath = file.path;
            const functions = sortedFunctions(file);
            const selectedFunction = functions.find((item) => item.id === state.selectedFunctionId) ?? null;
            dom.detailTitle.textContent = file.path;
            dom.detailMeta.textContent = `${{file.coveredLines}} / ${{file.totalLines}} lines covered · ${{file.coveredFunctions}} / ${{file.totalFunctions}} functions hit`;
            dom.detailHint.textContent = file.sourceAvailable ? 'Click a function to jump to the source range.' : 'Source preview unavailable for this file.';
            const functionPanel = functions.length
                ? `
                    <div class="panel">
                        <div class="panel-header">
                            <div>
                                <h3>Functions</h3>
                                <div class="meta">${{functions.length}} functions in this file.</div>
                            </div>
                            <div class="hint">Sort by name, hit state, line span, or module.</div>
                        </div>
                        <div class="panel-body">
                            <div class="function-table-scroll">
                                <table>
                                    <thead>
                                        <tr>
                                            ${{functionColumns.map((column) => {{
                                                const arrow = state.functionSort.key === column.key ? (state.functionSort.dir === 'asc' ? '↑' : '↓') : '↕';
                                                return `<th><button type="button" data-function-sort="${{column.key}}">${{escapeHtml(column.label)}} <span>${{arrow}}</span></button></th>`;
                                            }}).join('')}}
                                        </tr>
                                    </thead>
                                    <tbody>
                                        ${{functions.map((fn) => `
                                            <tr data-function-id="${{escapeHtml(fn.id)}}" class="${{state.selectedFunctionId === fn.id ? 'is-selected' : ''}}">
                                                <td><div>${{escapeHtml(fn.name)}}</div><div class="tags">${{fn.tags.map((tag) => `<span class="pill bucket-none">${{escapeHtml(tag)}}</span>`).join('')}}</div></td>
                                                <td><span class="pill ${{fn.hit ? 'bucket-good' : 'bucket-bad'}}">${{fn.hit ? 'hit' : 'missed'}}</span></td>
                                                <td class="metric">${{fn.startLine || '—'}}</td>
                                                <td class="metric">${{fn.endLine || '—'}}</td>
                                                <td class="metric">${{fn.addressCount}}</td>
                                                <td>${{escapeHtml(fn.moduleName || '—')}}</td>
                                            </tr>`).join('')}}
                                    </tbody>
                                </table>
                            </div>
                        </div>
                    </div>`
                : '<div class="empty">No function entries were reported for this file.</div>';
            const selectedFunctionPanel = selectedFunction
                ? `
                    <div class="panel">
                        <div class="panel-header">
                            <div>
                                <h3>Function Detail</h3>
                                <div class="meta">${{escapeHtml(selectedFunction.name)}}</div>
                            </div>
                            <span class="pill ${{selectedFunction.hit ? 'bucket-good' : 'bucket-bad'}}">${{selectedFunction.hit ? 'hit' : 'missed'}}</span>
                        </div>
                        <div class="panel-body details-grid">
                            <div class="function-header">
                                <div>
                                    <div><strong>${{escapeHtml(selectedFunction.name)}}</strong></div>
                                    <div class="function-meta">Lines ${{selectedFunction.startLine || '—'}} - ${{selectedFunction.endLine || '—'}} · ${{escapeHtml(selectedFunction.moduleName || '—')}}</div>
                                </div>
                                <div class="tags">${{selectedFunction.tags.map((tag) => `<span class="pill bucket-none">${{escapeHtml(tag)}}</span>`).join('')}}</div>
                            </div>
                            <div class="function-meta">Addresses: ${{selectedFunction.addressCount}} · Range: ${{escapeHtml(selectedFunction.startAddress || '—')}} → ${{escapeHtml(selectedFunction.endAddress || '—')}}</div>
                        </div>
                    </div>`
                : '';
            const sourceSegments = buildSourceSegments(file);
            const sourcePanel = file.sourceAvailable
                ? `
                    <div class="source-shell">
                        <div class="source-header">
                            <div>
                                <strong>Source Preview</strong>
                                <div class="hint">Coverage coloring is based on reported instrumented lines only.</div>
                            </div>
                            <div class="tags">
                                <span class="pill bucket-good">Covered line</span>
                                <span class="pill bucket-bad">Missed line</span>
                                <span class="pill bucket-none">Not instrumented</span>
                            </div>
                        </div>
                        <div class="source-scroll">
                            <div class="source-content">${{sourceSegments.map((segment) => {{
                                if (segment.type === 'neutral-group') {{
                                    const key = collapseKey(file.path, segment.startLine, segment.endLine);
                                    const collapsed = !state.collapsedNeutralGroups.has(key);
                                    const groupLines = segment.lines.map((line) => `<div class="source-line is-neutral ${{collapsed ? 'is-hidden' : ''}}" id="source-${{line.lineNumber}}" title="not instrumented"><div class="line-no">${{line.lineNumber}}</div><div class="code">${{highlightCode(line.text || ' ', inferLanguage(file.path))}}</div></div>`).join('');
                                    return `<div class="source-gap"><span>${{collapsed ? 'Hidden' : 'Showing'}} not instrumented lines ${{segment.startLine}}-${{segment.endLine}} (${{segment.lines.length}} lines)</span><button type="button" data-neutral-toggle="${{escapeHtml(key)}}">${{collapsed ? 'Show' : 'Hide'}}</button></div>${{groupLines}}`;
                                }}
                                const line = segment.line;
                                const coverage = line.coverage;
                                const cls = coverage ? (coverage.hit ? 'is-covered' : 'is-missed') : 'is-neutral';
                                const note = coverage ? `${{coverage.hit ? 'covered' : 'missed'}} · addresses ${{coverage.addressCount}}` : 'not instrumented';
                                return `<div class="source-line ${{cls}}" id="source-${{line.lineNumber}}" title="${{escapeHtml(note)}}"><div class="line-no">${{line.lineNumber}}</div><div class="code">${{highlightCode(line.text || ' ', inferLanguage(file.path))}}</div></div>`;
                            }}).join('')}}</div>
                        </div>
                    </div>`
                : `<div class="error">${{escapeHtml(file.sourceError || 'Source preview is unavailable for this file.')}}</div>`;
            dom.detailPanel.innerHTML = `
                <div class="file-summary">
                    <div class="summary-box"><div class="title">Line Coverage</div><div class="number">${{percent(file.lineCoverageRatio)}}</div><div class="hint">${{file.coveredLines}} covered · ${{file.missedLines}} missed</div></div>
                    <div class="summary-box"><div class="title">Function Coverage</div><div class="number">${{percent(file.functionCoverageRatio)}}</div><div class="hint">${{file.coveredFunctions}} hit · ${{file.missedFunctions}} missed</div></div>
                    <div class="summary-box"><div class="title">Source Preview</div><div class="number">${{file.sourceAvailable ? 'Ready' : 'Missing'}}</div><div class="hint">${{file.sourceAvailable ? `${{file.sourceLines.length}} source lines loaded · ${{file.uncoveredLines.length}} missed` : 'Could not resolve the workspace file'}}</div></div>
                </div>
                ${{functionPanel}}
                ${{selectedFunctionPanel}}
                ${{sourcePanel}}
            `;
            dom.detailPanel.querySelectorAll('[data-function-sort]').forEach((button) => button.addEventListener('click', () => setFunctionSort(button.dataset.functionSort)));
            dom.detailPanel.querySelectorAll('[data-function-id]').forEach((row) => row.addEventListener('click', () => {{
                state.selectedFunctionId = row.dataset.functionId;
                updateHash(file.path, state.selectedFunctionId);
                renderDetail();
                highlightFunction(file, state.selectedFunctionId);
            }}));
            dom.detailPanel.querySelectorAll('[data-neutral-toggle]').forEach((button) => button.addEventListener('click', () => {{
                const key = button.dataset.neutralToggle;
                if (state.collapsedNeutralGroups.has(key)) state.collapsedNeutralGroups.delete(key);
                else state.collapsedNeutralGroups.add(key);
                renderDetail();
            }}));
            if (selectedFunction) requestAnimationFrame(() => highlightFunction(file, selectedFunction.id));
            else if (state.selectedFunctionId) {{
                state.selectedFunctionId = null;
                updateHash(file.path);
            }} else updateHash(file.path);
        }}
        function init() {{
            restoreHashSelection();
            renderSummary();
            renderFiles();
            renderDetail();
        }}
        init();
    </script>
</body>
</html>
'''


def generate_html(payload: dict, title: str) -> str:
    return render_html(payload, title)


def main() -> None:
    args = parse_args()
    workspace = args.workspace.resolve()
    hits_data = load_json(args.hits)
    files = collect_files(hits_data, workspace)
    payload = build_report_payload(files, max(args.html_top_files, -1))

    if args.lcov_out is not None:
        args.lcov_out.parent.mkdir(parents=True, exist_ok=True)
        args.lcov_out.write_text(generate_lcov(files, workspace), encoding="utf-8")

    if args.report_json_out is not None:
        args.report_json_out.parent.mkdir(parents=True, exist_ok=True)
        args.report_json_out.write_text(generate_report_json(payload), encoding="utf-8")

    if args.html_out is not None:
        args.html_out.parent.mkdir(parents=True, exist_ok=True)
        args.html_out.write_text(generate_html(payload, args.title), encoding="utf-8")


if __name__ == "__main__":
    main()
