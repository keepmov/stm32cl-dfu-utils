#ifndef _SAM7DFU_H
#define _SAM7DFU_H

int dfuload_do_upload(struct usb_dev_handle *usb_handle, int interface, 
		      int xfer_size, const char *fname);
int dfuload_do_dnload(struct usb_dev_handle *usb_handle, int interface,
		      int xfer_size, const char *fname);

#endif
