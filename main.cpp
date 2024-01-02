#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <mmsystem.h>

int main() {
    // 現在の時刻を取得
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm parts;
    localtime_s(&parts, &now_c);

    int hour = parts.tm_hour - 12 * parts.tm_hour > 11 ? 1 : 0;
    switch (hour) {
    case 0:
        PlaySound(TEXT("C:/Customs/Chimes/00.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 1:
        PlaySound(TEXT("C:/Customs/Chimes/01.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 2:
        PlaySound(TEXT("C:/Customs/Chimes/02.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 3:
        PlaySound(TEXT("C:/Customs/Chimes/03.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 4:
        PlaySound(TEXT("C:/Customs/Chimes/04.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 5:
        PlaySound(TEXT("C:/Customs/Chimes/05.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 6:
        PlaySound(TEXT("C:/Customs/Chimes/06.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 7:
        PlaySound(TEXT("C:/Customs/Chimes/07.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 8:
        PlaySound(TEXT("C:/Customs/Chimes/08.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 9:
        PlaySound(TEXT("C:/Customs/Chimes/09.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 10:
        PlaySound(TEXT("C:/Customs/Chimes/10.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;
    case 11:
        PlaySound(TEXT("C:/Customs/Chimes/11.wav"), NULL, SND_FILENAME);
        std::this_thread::sleep_for(std::chrono::minutes(1)); // 1分間待機
        break;

    default:
        break;
    }
    return 0;
}
