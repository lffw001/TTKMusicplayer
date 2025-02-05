#ifndef MUSICTOOLSETSUIOBJECT_H
#define MUSICTOOLSETSUIOBJECT_H

/***************************************************************************
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2023 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/

#include <QObject>

/*! @brief The namespace of the application ui object.
 * @author Greedysky <greedysky@163.com>
 */
namespace TTK
{
    namespace UI
    {
        const QString SongsDetectStartBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_hover); }";

        const QString SongsDetectStopBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_stop_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_stop_hover); }";

        const QString SongsRedetectBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_redetect_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_redetect_hover); } \
                QPushButton:disabled{ background-image: url(:/toolSets/btn_redetect_hover); }";

        const QString SongsDetectDownloadBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_download_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_download_hover); } \
                QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_download_disable); }";

        const QString SongsDetectPlayBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_play_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_play_hover); } \
                QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_play_disable); }";

        const QString SongsDetectShareBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_share_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_share_hover); } \
                QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_share_disable); }";

        const QString SongsDetectUnloveBtn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_detect_unlove_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_detect_unlove_hover); } \
                QPushButton:disabled{ background-image: url(:/toolSets/btn_detect_unlove_disable); }";

        const QString CheckTestDuplicate = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_duplicate_normal); } \
                QToolButton:hover{ background-image: url(:/toolSets/btn_duplicate_hover); }";

        const QString CheckTestDuplicateClicked = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_duplicate_clicked); }";

        const QString CheckTestQuality = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_quality_normal); } \
                QToolButton:hover{ background-image: url(:/toolSets/btn_quality_hover); }";

        const QString CheckTestQualityClicked = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_quality_clicked); }";

        const QString CheckTestRename = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_rename_normal); } \
                QToolButton:hover{ background-image: url(:/toolSets/btn_rename_hover); }";

        const QString CheckTestRenameClicked = " \
                QToolButton{ border:none; \
                background-image: url(:/toolSets/btn_rename_clicked); }";

        const QString TimeToStop = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_stop); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_timer_stop_hover); }";

        const QString TimeToStopClicked = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_stop_clicked); }";

        const QString TimeToPlay = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_play); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_timer_play_hover); }";

        const QString TimeToPlayClicked = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_play_clicked); }";

        const QString TimeToDown = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_down); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_timer_down_hover); }";

        const QString TimeToDownClicked = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_timer_down_clicked); }";

        const QString TransferSong = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_import_song_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_import_song_hover); }";

        const QString TransferRing = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_import_ring_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_import_ring_hover); }";

        const QString TransferChangedDev = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_change_dev_normal); } \
                QPushButton::menu-indicator{ image:none; } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_change_dev_hover); }";

        const QString TransferRefreshDev = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_refresh_dev_normal); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_refresh_dev_hover); }";

        const QString ScreenSaverOn = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_saver_on); }";

        const QString ScreenSaverOff = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_saver_off); }";

        const QString ScreenItemEnable = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_saver_enable); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_saver_enable_hover); }";

        const QString ScreenItemDisable = " \
                QPushButton{ border:none; \
                background-image: url(:/toolSets/btn_saver_disable); } \
                QPushButton:hover{ background-image: url(:/toolSets/btn_saver_disable_hover); }";

    }
}

#endif // MUSICTOOLSETSUIOBJECT_H
