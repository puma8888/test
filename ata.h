#ifndef _ATA_H_
#define _ATA_H_

struct ata_t{
int fs;
int portbase;
int pri;
int offset;
};

#define CMD_READ	0x20
#define CMD_WRITE	0x30

int getdevparams_ata(char *dev, void *vfs);

int ata_io_sectors(const struct vdev_t *vdev, char cmd, char *lpbuf, __u64 no, int num);
void ata_close(struct vdev_t *vdev);

int ata_stat(HANDLE handle, struct stat_t *stat);

#endif /* _ATA_H_ */
