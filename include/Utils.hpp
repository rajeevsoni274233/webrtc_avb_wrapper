/**
 * (C) Copyright Elektrobit Automotive GmbH
 * All rights reserved
 * @ Author: Rajeev Soni
 * @ Create Time: 2022-10-03 18:35:15
 * @ Modified by: Your name
 * @ Modified time: 2023-06-21 16:49:12
 * @ Description:
 */
#ifndef UTILS_H_
#define UTILS_H_

#include <string>

#define BUFFER_SIZE 32768

// using GdkEvent = union _GdkEvent;
// using GtkWidget = struct _GtkWidget;
// using cairo_t  = struct _cairo;

constexpr char kSessionDescriptionTypeName[] = "type";
constexpr char kSessionDescriptionSdpName[] = "sdp";
constexpr char kCandidateSdpMidName[] = "sdpMid";
constexpr char kCandidateSdpMlineIndexName[] = "sdpMLineIndex";
constexpr char kCandidateSdpName[] = "candidate";
constexpr char kAudioLabel[] = "audio_label";
constexpr char kVideoLabel[] = "video_label";
constexpr char kStreamId[] = "stream_id";

enum class ConnectionStatus {
    UNINITIALISED,
    DISCONNECTED,
    DISCONNECTING,
    INITIALISING,
    INITIALISED,
    CONNECTING,
    CONNECTED
};

std::ostream& operator<<(std::ostream& os, ConnectionStatus connSts)
{
    switch (connSts)
    {
        case ConnectionStatus::UNINITIALISED:
            os << static_cast<std::string>("UNINITIALISED");
            break;
        case ConnectionStatus::DISCONNECTED:
            os << static_cast<std::string>("DISCONNECTED");
            break;
        case ConnectionStatus::DISCONNECTING:
            os << static_cast<std::string>("DISCONNECTING");
            break;
        case ConnectionStatus::INITIALISING:
            os << static_cast<std::string>("INITIALISING");
            break;
        case ConnectionStatus::INITIALISED:
            os << static_cast<std::string>("INITIALISED");
            break;
        case ConnectionStatus::CONNECTING:
            os << static_cast<std::string>("CONNECTING");
            break;
        case ConnectionStatus::CONNECTED:
            os << static_cast<std::string>("CONNECTED");
            break;
    }
    return os;
}

#endif // #ifndef UTILS_H_