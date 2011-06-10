/* BEGIN_COMMON_COPYRIGHT_HEADER
 *
 * Razor - a lightweight, Qt based, desktop toolset
 * https://sourceforge.net/projects/razor-qt/
 *
 * Copyright: 2010-2011 Razor team
 * Authors:
 *   Alexander Sokoloff <sokoloff.a@gmail.ru>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation;  only version 2 of
 * the License is valid for this program.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef RAZORMIME_H
#define RAZORMIME_H

#include <QtCore/QString>
#include <QtCore/QFileInfo>
#include <QtGui/QIcon>

class RazorMimeInfo
{
public:
    /// Constructs a RazorMimeInfo with the mimeType type.
    explicit RazorMimeInfo(const QString& mimeType);

    /// Constructs a new RazorMimeInfo that gives mime information about the given file.
    explicit RazorMimeInfo(const QFileInfo& file);

    /// Returns the name of the mime type.
    QString mimeType() const;

    /// Returns an icon associated with the mime type.
    QIcon   icon() const;

private:
    QString mType;
    QString mSubType;
};

#endif // RAZORMIME_H