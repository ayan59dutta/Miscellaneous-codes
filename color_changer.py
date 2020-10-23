from PIL import Image
import numpy as np
im = Image.open('H:/Codes/color_changer/google_logo_wiki.png')
img = np.array(im)
colors = []
for i in range(len(img)):
    for j in range(len(img[i])):
        if tuple(img[i][j][0:3]) not in colors:
            colors.append(tuple(img[i][j][0:3]))
        if any(img[i][j][0:3]):
            img[i][j][0:3] = [152, 255, 152]

img1 = Image.fromarray(img)
img1.save('H:/Codes/color_changer/google_logo_wiki1.png')

print('No of colors:', len(colors))

header = '<html>\n\t<body>'
footer = '\n\t</body>\n</html>'
body = ''
for c in sorted(colors):
    body += f'\n\t\t<h1 style="color:rgb{c}">This is a Heading</h1>'

html = header + body + footer
with open('H:/Codes/color_changer/google_colors1.html', 'w') as fp:
    fp.write(html)
