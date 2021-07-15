#include <lbpch.h>
#include <stl\Logger.h>
#include <atomic>
#include <chrono>
#include <fstream>
#include <string>
#include <string_view>
#include <thread>
#include <vector>
static struct asyncFStream **arr;
static int arrsz;
static int arrcap;
void registerASYNC2(struct asyncFStream *p) {
    if (arrsz == arrcap) {
        arrcap += 4;
        if (arr)
            arr = (struct asyncFStream **)realloc(arr, arrcap * sizeof(void *));
        else
            arr = (struct asyncFStream **)malloc(arrcap * sizeof(void *));
    }
    arr[arrsz++] = p;
}
void unregisterASYNC2(struct asyncFStream *p, struct asyncFStream *n) {
    for (int i = 0; i < arrsz; ++i) {
        if (arr[i] == p) {
            arr[i] = n;
            return;
        }
    }
}
void startWBThread() {
    std::thread thd([] {
        while (1) {
            std::chrono::time_point tp = std::chrono::steady_clock::now();
            tp += std::chrono::seconds(6);
            for (int i = 0; i < arrsz; ++i) {
                if (arr[i])
                    arr[i]->flushTimer();
            }
            std::this_thread::sleep_until(tp);
        }
    });
    thd.detach();
}
